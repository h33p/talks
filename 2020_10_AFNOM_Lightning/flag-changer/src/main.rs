use std::io::{self, BufRead, BufReader, Read, Write, Seek, SeekFrom};
use std::fs::{OpenOptions, File};

fn main() -> io::Result<()> {
    let stdin = io::stdin();

    let target = b"FLAG{AFNOM_IS_BAD}";
    let replacement = b"FLAG{AFNOM_IS_FAB}";

    if let Some(Ok(line)) = stdin.lock().lines().next() {
        let mut file = OpenOptions::new()
            .read(true)
            .write(true)
            .create(false)
            .open(line)?;

        let mut page = vec![0; 0x40000];
        let mut offset = 0;

        let mut write_offsets = vec![];

        while file.read_exact(&mut page).is_ok() {
            if let Some((page_off, _)) = page
                .windows(target.len())
                .enumerate()
                .find(|(_, b)| b == target) {
                println!("FOUND AT {:x} + {:x} = {:x}", offset, page_off, offset + page_off);
                write_offsets.push(offset + page_off);
            }
            offset += page.len();
        }

        println!("Overwriting mem!");

        for off in &write_offsets {
            file.seek(SeekFrom::Start(*off as _))?;
            file.write(replacement)?;
        }
    }
    
    Ok(())
}

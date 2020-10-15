use std::io::{self, Read};
use std::str;

const STR: ([u128; 0], [u8; 18]) = ([], *b"FLAG{AFNOM_IS_BAD}");

fn main() {
    let flag = str::from_utf8(&STR.1).unwrap();

    loop {
        println!("Flag: {}", flag);
        let mut reader = io::stdin();
        reader.read(&mut [0;10]).unwrap();
    }
}

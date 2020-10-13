# A journey through DMA
## Or why you should totally let me plug a device in your PCIe slot

---

# What is all this?

* Access RAM directly
* Target can not restrict access
* Target does not know about access

---

# Ways to do DMA

* PCILeech
* VMs (QEMU/KVM, VBox, etc.)
* Local access (/dev/mem, MmMapIOSpace, WinDBG)

---

# But why?

* Game hacking
* Monitoring viruses
* Viruses
* Espionage
* And other 4D chess moves

---

# Example 1: Changing a flag

---

# Dumping a process?

## not so fast!

* Virtual memory adds layers to this...

---

# Virtual memory

* Is not mapped 1-to-1 with physical RAM. It is shuffled
* 4Kb per "page"
* 256TB of addressible memory per process
* We don't have 256TB of memory... Yet...
* Somehow we need to mark which memory exists, and where each region points

---

# Page tables

* Builds a nice tree structure
* Each node holds 512 entries (512 * 64-bit = 4Kb)
* Each entry can either be present or not
* Present entries point to another node, down the tree
* Page table tree has 4 levels

---

# Dumping a process?

## not so fast!

* Virtual memory adds layers to this...
* Where is the process?
* Where is Windows?
* Where am I?
* Why am I?

---

# Let's find out where the hell Windows is!

* Find Windows bootloader (in the smallest 16MB of RAM)
* Grab a pointer within it. It has an address to Windows kernel page table, and kernel entry point.
* Find the start of Windows kernel

---

# Dumping a process?

## almost there!

* Find the process list
* Find the process in the list
* Voila!

---

# memflow

* Meant to make this process easy
* Works on QEMU/KVM, Coredumps
* Easy to extend

---

# Example 2: Dumping login passwords

---

# Silver bullet?

## No!

* Page files
* No simple code execution

---

# Enough for some insane things?

## Hell yeah!

---

# So should you totally let me plug a device in your PCIe slot?

* Exercise left to the reader

---

# Some links

* github.com/ufrisk - Ulf Frisk, the man who started it all
* memflow.github.io - memflow homepage
* youtube.com/h33p\_tech - my YT with tutorials


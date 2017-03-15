# ALX
This is a work in progress 8-bit virtual machine
Currently there are only a few instructions that can only be written in binary
The nmeumonics of the instructions have not been decided yet but the full list of intended instructions can be found in the TOD file

#========8_bit_instructions========

[0][1][0][0][0][0][1][1]

The first 2 bits represents the number of arguments of the instruction
  currently there are no instructions with three args
  
The second 2 bits are groups of instructions
  00 -arithmetic instructions
  01 -memory and stack instructions
  10 -jump instructions
  11 - bit operations

The final lower half of the byte is for various instructions of the above groups
This whole translation is done through the use of switch statements which is probably bad

#=====memory=====

Each instnace can have up to 256bytes of memory.
Memory can be allocated and should be allocated for devices before the stack is initialized.

an example of this is located in drivers/display.c
I need to write a keyboard driver.

Ihe allocation of memory is done by giving a pointer for the start of memory allocated and how many bytes that you want.

#=======display=======

Each tick the display pulls three characters [x][y][z]
x: x-axis location of the "pixel" 
y: y-axis location of the "pixel"
z: value of the "pixel"
there is a commented out booting display sequence in test.c


I plan to write the assembler in java because I am lazy.
:wq

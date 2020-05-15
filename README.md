# monty

This project implements the main features of a Monty byte codes interpreter.
Monty is a scripting language compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. Each line in the code contains no more than one instruction.

## Usage

A file with the .m extension is required which contains the opcodes to be executed.

```push 0
push 1
swap
pall
add
pint
# comment
```

Compile using:
```$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty```
Execute using:
```$ ./monty file.m```

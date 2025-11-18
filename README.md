# Ft_printf - My Printf Implementation

Recreating printf taught me how variable arguments and format parsing actually work.

## What This Does

Implements the core functionality of printf with the most common format specifiers:

- **%c** - characters
- **%s** - strings
- **%p** - pointers (this one was tricky!)
- **%d, %i** - integers
- **%u** - unsigned numbers
- **%x, %X** - hexadecimal
- **%%** - the actual percent sign

## The Real Challenge

Understanding variadic functions (...), managing different data types in one function, and handling all the edge cases.

## How to Build
```bash
make
Why This Matters
This project pushed me to understand how complex functions are built from simple pieces.

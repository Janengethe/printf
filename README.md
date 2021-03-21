## C - printf
> This is a group project with two memmbers workng on it. We are creating a mini-version of the normal "printf" function found in the <stdio.h> Library. The version that we will create will work the same way as the normal "printf", in that it will allow us to print any argument given to the standard output, that will include printing any combination of strings, integers, characters, among other different datatypes.
### GOALS
* Implement custom printf() function similar to the one in the standard library
* Use Variadic functions to allow a varying number of arguments to be passed to the function
* Parse a format string to identify the print options

#### Handle the following conversion specifiers:
* c - char
* s - string
* % - percent
* d - decimal
* i - integer
* b - binary

### Requirements

* Operating System: Ubuntu 14.04 LTS
* compiler: GCC 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* coding style: [Betty Style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)


### Project Breakdown
| Task # |  Type   |                Description |
| :---   |   :---: |                      :--- |
|0       | **Mandatory**| Write a function that produces output accordint to a format |
|1       | **Mandatory**| Handle the following conversion specifiers: d i |
|2 |**Mandatory** | Create a `man page` for your function|
|3 | *Advanced*| Handle the following custom conversion specifiers: `b` the unsiged int argumment is converted to binary|
|4 |*Advanced*| Handle conversion specifiers `u, o x, X`|
|5| | |
|6| *Advanced*| Handle conversion specifier `p`|
|7| *Advanced*| Handle custom conversion specifier, `S`|
|8| *Advanced*| |
|9| *Advanced*| |
|10| *Advanced*| |
|11| *Advanced*| |
|12| *Advanced*| |
|13| *Advanced*| |
### Files description:
1. **base_change** Converts decimal int to octal and hex
2. **binary.c** Converts unsigned integer to binary
3. **holberton.h** Contains function prototypes and global variable definitions
4. **integers.c** Prints integers
5. **man_3_printf** Contains the description of the function _printf
6. **numbers.c** Functions to print unsigned int
7. **parse_args** - Contains a function that iterates through the main string to print a formatted string
8. **Handles  custom conversion specifier `S`. Prints the string and Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
9. **_printf.c** Caller function that prints formatted string from the main string and other variable arguments
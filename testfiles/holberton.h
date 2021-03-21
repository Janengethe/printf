#ifndef HOLBERTON_H
#define HOLBERTON_H
#define _PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>



/**
 * struct type_spec - structure for symbols and functions
 *
 * @t: Characters
 * @fn: respective functions
 */

struct type_spec
{
char *t;
int (*fn)(va_list);
};
typedef struct type_spec spec_t;
/* Function prototypes*/
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);
char *rev_str(char *s);
int rot13(va_list list);
void _base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_reversed(va_list arg);
int parse_args(const char *format, spec_t fun_list[], va_list arg_list);
int print_number(va_list args);
int print_unsgined_number(unsigned int n);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_custom(va_list list);
int print_pointer(va_list list);
#endif


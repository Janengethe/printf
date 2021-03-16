#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct sym_func - structure for symbols and functions
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

#endif

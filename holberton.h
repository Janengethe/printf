#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct sym_func - structure for symbols and functions
 *
 * @op: Operator
 * @fn: respective function
 */

struct sym_func
{
char *op;
int (*fn)(va_list);
};
typedef struct sym_func sym_fun;
/* Function prototypes*/

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

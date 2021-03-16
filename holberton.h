#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
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

int _putchar(char c);
int _printf(const char *format, ...);

#endif

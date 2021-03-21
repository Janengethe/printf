#include "holberton.h"

/**
 * print_integer - Prints an integer
 * @list: arguments list
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
int length;
length = print_number(list);
return (length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: arguments list
 * Return: number count
 */
int unsigned_integer(va_list list)
{
unsigned int num;
num = va_arg(list, unsigned int);
if (num == 0)
return (print_unsgined_number(num));
if (num < 1)
return (-1);
return (print_unsgined_number(num));
}

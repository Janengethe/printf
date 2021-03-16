#include "holberton.h"

/**
 * print_char - Prints character
 * @list: arguments list
 * Return: characters printed
 */
int print_char(va_list list)
{
_putchar(va_arg(list, int));
return (1);
}

/**
 * print_string - Prints a string
 * @list: arguments list
 * Return: characters printed.
 */
int print_string(va_list list)
{
int i;
char *s;
s = va_arg(list, char *);
if (s == NULL)
s = "(null)";
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
_putchar('%');
return (1);
}

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
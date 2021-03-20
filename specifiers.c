#include "holberton.h"

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
unsigned int i;
for (i = 0; num > 0; i++)
{
num = num / base;
}
return (i);
}


/**
 * _base - sends characters to be written on standard output
 * @str: String to parse
 */
void _base(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
}

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

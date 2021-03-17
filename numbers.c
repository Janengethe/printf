#include "holberton.h"

#include "holberton.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */
int print_string(char *str)
{
int chars_printed = 0;
while (str && str[chars_printed])
{
_putchar(str[chars_printed]);
chars_printed++;
}
return (chars_printed);
}

/**
 * print_number - prints a number send to this function
 * @args: arguments list
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
int n;
int div;
int len;
unsigned int num;
n  = va_arg(args, int);
div = 1;
len = 0;
if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
num = n;
for (; num / div > 9; )
div *= 10;
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
int div;
int len;
unsigned int num;
div = 1;
len = 0;
num = n;
for (; num / div > 9; )
div *= 10;
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}

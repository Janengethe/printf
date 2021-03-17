#include "holberton.h"

/**
 * print_binary - converts an unsigned int to binary
 * @num: int to be converted
 *
 * Return: no of resulting binary characters
 */
int print_binary(unsigned int num)
{
int chars_printed = 0, i = 0;
char bin[sizeof(unsigned int) * 8];
if (num == 0)
{
chars_printed += _putchar('0');
return (chars_printed);
}
if (num == 1)
{
chars_printed += _putchar('1');
return (chars_printed);
}
while (num > 0)
{
bin[i] = '0' + (num % 2);
num = num / 2;
i++;
}
i--;
while (i >= 0)
{
chars_printed += _putchar(bin[i]);
i--;
}
return (chars_printed);
}

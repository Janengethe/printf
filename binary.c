#include "holberton.h"

/**
 * print_binary - converts an unsigned int to binary
 * @list: int to be converted
 *
 * Return: no of resulting binary characters
 */
int print_binary(va_list list)
{
unsigned int num;
int i, len;
char *str;
char *rev_s;

num = va_arg(list, unsigned int);
if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);

for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0';
rev_s = rev_str(str);
if (rev_s == NULL)
return (-1);
_base(rev_s);
free(str);
free(rev_s);
return (len);
}

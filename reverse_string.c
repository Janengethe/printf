#include "holberton.h"

/**
 * print_reverse - prints a string in reverse order, followed by a new line.
 * @s: string to be printed in reverse order
 * Return: number of characters printed
 */
int print_reverse(char *s)
{
int i, j, k, chars_printed = 0;
char *str;

i = 0;
j = 0;
k = 0;
if (s)
{
while (s[i])
i++;
str = malloc(sizeof(char) * i);
if (str == NULL)
{
free(str);
return (0);
}
for (j = (i - 1); j >= 0; j--)
{
str[k] = s[j];
k++;
}
str[i] = '\0';
chars_printed = print_string(str);
return (chars_printed);
}
return (0);
}

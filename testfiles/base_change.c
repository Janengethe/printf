#include "holberton.h"

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";

num = num - 10;
if (x == 'x')
return (hex[num]);
else
return (Hex[num]);
return (0);
}

/**
 * print_octal - Prints a number in octal base
 * @list: arguments
 * Return: Number of symbols printed to stdout
 */
int print_octal(va_list list)
{
unsigned int num;
int len;
char *octal_rep;
char *rev_s;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 8);

octal_rep = malloc(sizeof(char) * len + 1);
if (octal_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
octal_rep[len] = (num % 8) + 48;
num = num / 8;

}
octal_rep[len] = '\0';
rev_s = rev_str(octal_rep);
if (rev_s == NULL)
return (-1);

_base(rev_s);
free(octal_rep);
free(rev_s);
return (len);
}

/**
 * print_hex - Prints a decimal number on base16 lowercase
 * @list: arguments
 * Return: Number of characters printed
 */
int print_hex(va_list list)
{
unsigned int num;
int len;
int rem_num;
char *hex_rep;
char *rev_hex;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 16);
hex_rep = malloc(sizeof(char) * len + 1);
if (hex_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
rem_num = num % 16;
if (rem_num > 9)
{
rem_num = hex_check(rem_num, 'x');
hex_rep[len] = rem_num;
}
else
hex_rep[len] = rem_num + 48;
num = num / 16;
}
hex_rep[len] = '\0';
rev_hex = rev_str(hex_rep);
if (rev_hex == NULL)
return (-1);
_base(rev_hex);
free(hex_rep);
free(rev_hex);
return (len);
}


/**
 * print_heX - Prints a decimal number on base16 Uppercase
 * @list: arguments
 * Return: Number of characters printed
 */
int print_heX(va_list list)
{
unsigned int num;
int len;
int rem_num;
char *hex_rep;
char *rev_hex;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 16);
hex_rep = malloc(sizeof(char) * len + 1);
if (hex_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
rem_num = num % 16;
if (rem_num > 9)
{
rem_num = hex_check(rem_num, 'X');
hex_rep[len] = rem_num;
}
else
hex_rep[len] = rem_num + 48;
num = num / 16;
}
hex_rep[len] = '\0';
rev_hex = rev_str(hex_rep);
if (rev_hex == NULL)
return (-1);
_base(rev_hex);
free(hex_rep);
free(rev_hex);
return (len);
}

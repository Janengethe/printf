#include "holberton.h"
/**
 * _printf - prints a formatted string.
 * @format: main string
 * Return: total no. of chars printed
 */

int _printf(const char *format, ...)
{
int p_chars;/* printed character */
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"u", unsigned_integer},
{NULL, NULL}
};
va_list arg_list;
}

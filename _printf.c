#include "holberton.h"
/**
 * _printf - prints a formatted string from the main string and other variable
 * arguments passed to it
 *
 * @format: main string
 * Return: returns the total number of characters printed
 */

int _printf(const char *format, ...)
{
	int chars;
	spec_t fun_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"u", unsigned_integer}
            	};
		va_list arg_list;

		if (format == NULL)
			return (-1);

		va_start(arg_list, format);

		/**
		 * parse_args - parses the main string and all other paremetes
		 * it receives
		 */

		chars = parse_args(format, fun_list, arg_list);
		va_end(arg_list);
		return (chars);
}

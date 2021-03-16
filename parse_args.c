#include "holberton.h"

/**
 * parse_args - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @fun_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parse_args(const char *format, spec_t fun_list[], va_list arg_list)
{
	int x, y, r_val, chars;

	chars = 0;
	for (x = 0; format[x] != '\0'; x++)/* Iterates through the main str*/
	{
		if (format[x] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (y = 0; fun_list[y].t != NULL; y++)
			{
				if (format[x + 1] == fun_list[y].t[0])
				{
					r_val = fun_list[y].fn(arg_list);
					if (r_val == -1)
						return (-1);
					chars += r_val;
					break;
				}
			}
			if (fun_list[y].t == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					chars = chars + 2;
				}
				else
					return (-1);
			}
			x = x + 1; /*Updating x to skip format symbols*/
		}
		else
		{
			_putchar(format[x]); /*call the write function*/
			chars++;
		}
	}
	return (chars);
}

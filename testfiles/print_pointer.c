#include "holberton.h"

/**
 * print_pointer - prints a pointer
 * @p: pointer to be printed
 *
 * Return: number of characters printed
 */
int print_pointer(va_list list)
{
	void *p = va_arg(list, const char *);
	int chars_printed = 0;

	chars_printed += _printf("0x");
	chars_printed += _printf("X", (unsigned long int)p);
	return (chars_printed);
}

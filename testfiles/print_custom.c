#include "holberton.h"
/**
 * print_custom - prints string including non printable chars
* @list: string to convert
* Return: The number of chars to be printed
 */

int print_custom(va_list list)
{
        int i = 0, chars_printed = 0;
        char c;
	char *str;


	str = va_arg(list, char *);



        while (str[i])
        {
                c = str[i];
                if ((c > 0 && c  < 32) || c >= 127)
                {
                        chars_printed += _putchar('\\');
                        chars_printed += _putchar('x');
                        chars_printed += _putchar('0');
			chars_printed += _printf("%X", (unsigned int) c);

                }
                else
                {
                        chars_printed += _putchar(c);
                }
                i++;
        }
        return (chars_printed);
}

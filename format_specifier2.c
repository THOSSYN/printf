#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * int_out - prints out integers
 * @i: takes integar
 *
 * Return: prints out integers
 */
void int_out(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	if (i / 10)
		int_out(i / 10);
	_putchar((i % 10) + '0');
}
/**
 * len - gets length of string
 * @c: string to be checked
 *
 * Return: returns an integar
 */

size_t len(char *c)
{
	size_t i = 0;

	for (i = 0; c[i] != '\0';)
		i++;
	return (i);
}
/**
 * _printf - Prints to standard output
 * @format: string literal containing formats
 *
 * Return: returns zero
 */

int _printf(const char *format, ...)
{
	va_list first_arg;
	int position = 0, d, i;

	if (format == NULL)
		return (0);

	while (*format)
	{
		if (position == 0)
		{
			if (*format == '%')
				position = 1;
			else
				_putchar(*format);
		} else if (position == 1)
		{
			switch (*format)
			{
				case 'd':{
						d = va_arg(first_arg, int);
						int_out(d);
						break;
					}
				case 'i':{
						i = va_arg(first_arg, int);
						int_out(i);
						break;
					}
				default:
					 _putchar(*format);
			}
			position = 0;
		}
		format++;
	}
	return (0);
}





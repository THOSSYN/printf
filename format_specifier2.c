#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Prints to standard output
 * @format: string literal containing formats
 *
 * Return: returns zero
 */

void _vprintf(const char *format, va_list first_arg)
{
	int position = 0, d, i;

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
}

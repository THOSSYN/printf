#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _vprintf - Prints to standard output
 * @format: string literal containing formats
 *
 * Return: returns zero
 */

int _vprintf(const char *format, va_list first_arg)
{
	char buffer[33];
	int position = 0, d, i, count = 0;
	char sign;

	while (*format)
	{
		if (position == 0)
		{
			if (*format == '%')
				position = 1;
			else
			{
				_putchar(*format);
				count++;
			}
		} else if (position == 1)
		{
			switch (*format)
			{
				case 'd':{
						d = va_arg(first_arg, int);
						sign = '+';
						if (d < 0)
						{
							sign = '-';
							d = abs(d);
						}
						count += int_out(d, sign, 10, buffer);
						break;
					}
				case 'i':{
						i = va_arg(first_arg, int);
						sign = '+';
						if (i < 0)
						{
							sign = '-';
							i = abs(i);
						}
						count += int_out(i, sign, 10, buffer);
						break;
					}
				default:
					 _putchar(*format);
					 count++;
			}
			position = 0;
		}
		format++;
	}
	return (count);
}

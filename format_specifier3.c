#include<stdlib.h>
#include "main.h"
#include<stdarg.h>

/**
 *bin_out - prints binary.
 *@first_arg: the arguments (number).
 *@base: is the number base.
 *Return: void.
 */

void bin_out(int first_arg, int base)
{
	char buffer[33];
	int remainder;
	int n = abs(first_arg);
	int i = 0, j;

	while (n != 0)
	{
		remainder = n % base;
		if (remainder < 10)
		{
			buffer[i++] = '0' + remainder;
		}
		else
		{
			buffer[i++] = 'A' + remainder - 10;
		}
		n /= base;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}

/**
 *_printf - prints to stdout
 *@format: is the string
 *Return: return 0.
 */

int _printf(const char *format, ...)
{
	va_list first_arg;
	int position = 0, n;

	va_start(first_arg, format);

	if (!(*format))
		return (0);
	while (*format)
	{
		if (position == 0)
		{
			if (*format == '%')
				position = 1;
			else
				_putchar(*format);
		}
		else if (position == 1)
		{
			switch (*format)
			{
				case 'b':
				{
					n = va_arg(first_arg, int);
					bin_out(n, 2);
					break;
				}
				default:
				{
					_putchar(*format);
					break;
				}
				position = 0;
			}
		}
		format++;
	}
	return (0);
}

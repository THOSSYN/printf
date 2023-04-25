#include<stdarg.h>
#include<stdlib.h>
#include<limits.h>
#include<stddef.h>
#include "main.h"

/**
 *_vprintf - return the output to stdout with length
 *@format: is the pointer to string
 *@first_arg: is the optional argument
 *Return: length of string printed.
 */

int _vprintf(const char *format, va_list first_arg)
{
	char *str;
	char sign, ch;
	char buffer[33];
	unsigned int hex, Hex, bin, oct; 
	int position = 0, n, i;
	int count = 0;

	while (*format)
	{
		if (position == 0)
		{
			if(*format == '%')
			{
				position = 1;
			}
			else
			{
				_putchar(*format);
				count++;
			}
		}
		else if (position == 1)
		{
			switch (*format)
			{
				case 'c':
				{
					ch = va_arg(first_arg, int);
					_putchar(ch);
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(first_arg, char *);
					count += write(1, str, len(str));
					break;
				}
				case 'd':
				{
					n = va_arg(first_arg, int);
					sign = '+';
					if (n < 0)
					{
						sign = '-';
						n = abs(n);
					}
					count += int_out(n, sign, 10, buffer);
					break;
				}
				case 'i':
				{
					i = va_arg(first_arg, int);
					sign = '+';
					if (i < 0)
					{
						sign = '-';
						i = abs(i);
					}
					count += int_out(n, sign, 10, buffer);
					break;
				}
				case 'x':
				{
					hex = va_arg(first_arg, unsigned int);
					count += iTh(hex);
					break;
				}
				case 'X':
				{
					Hex = va_arg(first_arg, unsigned int);
					count += iTH(Hex);
					break;
				}
				case 'o':
				{
					oct = va_arg(first_arg, unsigned int);
					count += iTO(oct);
					break;
				}
				case 'b':
				{
					bin = va_arg(first_arg, unsigned int);
					count += iTB(bin);
					break;
				}
				default:
				{
					_putchar(*format);
					count++;
					break;
				}
			}
			position = 0;
		}
		format++;
	}
	return (count);
}

#include<stdarg.h>
#include "main.h"
#include<stddef.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>

/**
 *_printf - A function that prints formatted output.
 *@format: is the string.
 *@first_arg: is the variable that traverse the 
 *optional argument.
 *Return: returns 0.
 */
void _vprintf(const char *format, va_list first_arg)
{
	char ch;
	char *s;
	int position = 0;

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
				case 'c': {
					ch = va_arg(first_arg, int);
					_putchar(ch);
					break;
				}
				case 's':{
					s = va_arg(first_arg, char *);
					write(1, s, len(s));
					break;
				}
				default:
					_putchar(*format);
					break;
			}
			position = 0;
		} format++;
	}
}

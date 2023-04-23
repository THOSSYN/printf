#include<stdarg.h>
#include "main.h"
#include<stddef.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
/**
 *len - Finds the length of a string.
 *@str: is the string whose length is determined
 *Return: return the length.
 */
size_t len(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0';)
		i++;
	return (i);
}

/**
 *_printf - A function that prints formatted output.
 *@format: is the string.
 *
 *
 *Return: returns 0.
 */
int _printf(const char *format, ...)
{
	va_list first_arg;
	char ch;
	char *s;
	int position = 0;

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
	return (0);
}
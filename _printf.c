#include "main.h"
#include <stdarg.h>

/**
 *_printf - prints result to stdout stream
 *@format: is the pointer to the string
 *
 *Return: returns 0.
 */

int _printf(const char *format, ...)
{
	int length;

	va_list first_arg;

	if (!(*format) || format == NULL)
		return (-1);
	va_start(first_arg, format);

	length = _vprintf(format, first_arg);
	return (length);
}

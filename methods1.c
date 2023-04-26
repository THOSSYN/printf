#include <stdlib.h>
#include "main.h"

/**
 * spec_char - prints string and printf special char format
 * @c: pointer to the set of characters
 *
 * Return: returns an integer
 */
int spec_char(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 31)
		{
			_putchar(c[i]);
			i++;
		} else
		{
			_putchar('\\');
			_putchar('x');
			if (c[i] < 16)
				_putchar('0');
			iTH(c[i]);
			i++;
		}
	}
	c[i + 1] = '\0'
	return (i + 1);
}
/**
 * len - Finds the length of a string.
 * @str: is the string whose length is determined
 *
 * Return: return the length.
 */
size_t len(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0';)
		i++;
	return (i);
}

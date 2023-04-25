#include <stdlib.h>
#include <unistd.h>
#include "main.h"

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
 * int_out - prints out integers
 * @i: takes integar
 *
 * Return: prints out integers
 */
int int_out(int first_arg, char sign, int base, char *buffer)
{
	int i = 0, j, rem;
	int num = abs(first_arg);

	while(num != 0)
	{
		rem = num % base;
		if (rem < 10)
		{
			buffer[i++] = '0' + rem;
		}
		else
		{
			buffer[i++] = 'A' + rem - 10;
		}
		num /= base;
	}
	if (sign == '-')
	{
		buffer[i++] = '-';
	}
	else if (sign == '+')
	{
		buffer[i] = '+';
	}
	else if (sign == ' ')
		buffer[i++] = ' ';

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
	return(i);
}

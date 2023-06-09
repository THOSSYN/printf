#include <stdlib.h>
#include <unistd.h>
#include "main.h"


/**
 * int_out - prints out integers
 * @first_arg: is the integer number
 *@sign: is the sign
 *@base: is the base for the conversion.
 *@buffer: is the array.
 * Return: prints out integers
 */
int int_out(int first_arg, char sign, int base, char *buffer)
{
	int i = 0, j, rem;
	int num = abs(first_arg);

	while (num != 0)
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
	return (i);
}

/**
 * iTh - Convert decimal to hexadecimal
 * @num: number to be converted
 *
 * Return: returns an integer
 */
int iTh(unsigned int num)
{
	char buffer[33];
	int b;
	unsigned int temp, i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;

		if (temp < 10)
		{
			buffer[i] = temp + 48;
			i++;
		} else
		{
			buffer[i] = temp + 87;
			i++;
		}
		num /= 16;
	}

	for (b = i - 1; b >= 0; b--)
		_putchar(buffer[b]);
	return (i);
}

/**
 * iTH - Convert decimal to Hexadecimal
 * @num: number to be converted
 *
 * Return: returns an integer
 */
int iTH(unsigned int num)
{
	char buffer[33];
	int b;
	unsigned int temp, i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;

		if (temp < 10)
		{
			buffer[i] = temp + 48;
			i++;
		} else
		{
			buffer[i] = temp + 55;
			i++;
		}
		num /= 16;
	}
	for (b = i - 1; b >= 0; b--)
		_putchar(buffer[b]);
	return (i);
}
/**
 * iTO - Convert decimal to Hexadecimal
 * @num: number to be converted
 *
 * Return: returns an integer
 */
int iTO(unsigned int num)
{
	char buffer[33];
	unsigned int rem = 0, i;
	int b;

	i = 0;
	while (num != 0 && i < sizeof(buffer))
	{
		rem = num % 8;
		buffer[i] = rem + 48;
		num /= 8;
		i++;
	}
	for (b = i - 1; b >= 0; b--)
		_putchar(buffer[b]);
	return (i);
}
/**
 * iTB - Convert decimal to Hexadecimal
 * @num: number to be converted
 *
 * Return: returns an integer
 */
int iTB(unsigned int num)
{
	char buffer[33];
	unsigned int rem = 0, i;
	int b;

	i = 0;
	while (num != 0 && i < sizeof(buffer))
	{
		rem = num % 2;
		buffer[i] = rem + 48;
		num /= 2;
		i++;
	}
	for (b = i - 1; b >= 0; b--)
		_putchar(buffer[b]);
	return (i);
}

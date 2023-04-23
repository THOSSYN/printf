#include <unistd.h>

/**
 * _putchar - Output individual chacters
 * @c: character to be printed
 *
 * Return: returns a character
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

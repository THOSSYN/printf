#include <stdlib.h>
#include <unistd.h>

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
void int_out(int i)
{
        if (i < 0)
        {
                _putchar('-');
                i = -i;
        }

        if (i / 10)
                int_out(i / 10);
        _putchar((i % 10) + '0');
}
/**
 * _putchar - Output individual chacters
 * @c: character to be printed
 *
 * Return: returns a character
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

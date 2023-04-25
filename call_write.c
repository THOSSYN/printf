#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _write - Allows reading and writing to buffer
 *
 * Return: number of characters read by the buffer
 */
int _write(void)
{
	int j;

	char buffer[BUFFER_SIZE];

	j = read(0, buffer, BUFFER_SIZE);

	return (write(1, buffer, j));
}

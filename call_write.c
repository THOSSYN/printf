#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - This is the entry point of the program
 *
 * Return: number of characters read by the buffer
 */
int main(void)
{
	int j;

	char buffer[BUFFER_SIZE];

	j = read(0, buffer, BUFFER_SIZE);

	return (write(1, buffer, j));
}

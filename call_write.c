#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(void)
{
	char buffer[BUFFER_SIZE];

	return (write(1, buffer, BUFFER_SIZE));
}

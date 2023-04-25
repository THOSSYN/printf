#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(void)
{
	int j;

	char buffer[BUFFER_SIZE];

	j = read(0, buffer, BUFFER_SIZE);
	
	return (write(1, buffer, j));
}

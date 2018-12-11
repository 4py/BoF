
//gcc -no-pie -fno-stack-protector -z execstack -o Ex0 Stack1.c

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	volatile int modified;
	char buffer [64];

	modified = 0;
	gets(buffer);

	if (modified != 0)
	{
		printf("You Win !\n");
	}
	else
	{
		printf("modified = 0\n");
	}
	return 0;
}
#include <stdio.h>

/**
* main -> This is a function that print its file name
* @argc: argc is a parameter
* @argv: an array of a command line listed
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

/**
* main -> This is a function that print the number of arguments passed into it
* @argc: number of command line arguments
* @argv: array that contains the program command line arguments
* Return: 0 for success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", *argv - 1);
	return (0);
}

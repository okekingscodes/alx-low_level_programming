#include <stdio.h>
#include <stdlib.h>

/**
* main -> This is a function that add two numbers using argc and argv
* @argc: argc is a parameter
* @argv: an array of a command line listed
* Return: result
*/
int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", rsult);
	return (0);
}

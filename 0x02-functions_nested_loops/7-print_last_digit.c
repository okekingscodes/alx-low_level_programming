#include "main.h"

/**
* print_last_digit -> Prints the last digit of number
* @n: the passed arguments
* Return: the last digit
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

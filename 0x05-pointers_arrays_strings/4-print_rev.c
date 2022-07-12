#include "main.h"
#include <string.h>

/**
* print_rev -> we are printing a string in a reverse manner
* @s: the string to be printed in reverse manner
*/
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


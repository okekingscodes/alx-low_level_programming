#include "main.h"
#include <string.h>

/**
* puts_half -> a function that print have of a string
* @str: the parameters to be passed
*/
void puts_half(char *str)
{
	int i, j, k;

	i = strlen(str);
	if (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;
	for (k = j; k < i; k++)
		_putchar(str[k]);
	_putchar('\n');
}

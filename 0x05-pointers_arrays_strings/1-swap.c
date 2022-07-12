#include "main.h"

/**
* swap-int -> We were given two integers to swap the values they are holding
* @a: the first parameter
* @b: the second parameter
* @tmp: a variable to be passed
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

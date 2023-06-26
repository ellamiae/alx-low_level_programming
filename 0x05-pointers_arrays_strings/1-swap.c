#include "main.h"

/**
 * swap_int - swaping two integers
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{	int x;
	x = *a;
	*a = *b;
	*b = x;
}

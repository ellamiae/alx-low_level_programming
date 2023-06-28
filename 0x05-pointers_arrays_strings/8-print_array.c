#include "main.h"

/**
 * print_array - elements of an array
 *
 * @n: elements parameter
 * @a: string parameter
 *
 * Return: noting
*/

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
		printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

#include "main.h"

/**
 * print_rev - reverse a string
 *
 * @s: string prameter
 *
 * Return: nothing
*/

void print_rev(char *s)
{	int i, len;
	for (i = 0; s[i] != '\0'; s++)
		len = len + 1;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - print string
 *
 * @str: string parameter
 *
 * Return: nothing
*/

void puts2(char *str)
{	int i;
	for (i = 0; str[i] != '\0'; str = str + 2)
		_putchar(str[i]);
	_putchar('\n');
}

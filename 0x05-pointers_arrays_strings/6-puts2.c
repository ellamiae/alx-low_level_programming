#include "main.h"

/**
 * puts2 - print string
 *
 * @str: string parameter
 *
 * Return: nothing
*/

void puts2(char *str)
{	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str = str + 2;
	}
	_putchar('\n');
}

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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

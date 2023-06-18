#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase e and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	char i = 'a';
	while (i <= 'z')

	{
		if (i == 'q' || i == 'e')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}

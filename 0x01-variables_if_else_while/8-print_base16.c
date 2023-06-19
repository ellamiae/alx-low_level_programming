#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: lowercase e and q
 *
 * Return: 0 (success)
*/
int main(void)
{	int i;
	for (i = 48 ; i <= 57 ; i++)
		putchar(i);
	for (i = 97 ; i <= 102 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

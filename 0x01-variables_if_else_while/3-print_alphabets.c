#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: lower and aupper
 *
 * Return: 0 (success)
*/
int main(void)
{	char i, j;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (j = 'A' ; j <= 'Z' ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

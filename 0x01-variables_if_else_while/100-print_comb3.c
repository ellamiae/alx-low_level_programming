#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: combination of two digits
 *
 * Return: 0 (success)
*/
int main(void)
{int i, j;
	for (i = 48 ; i < 57 ; i++)
	{
		for (j = i + 1 ; j <= 57 ; j++)
	{
			putchar(i);
		putchar(j);
		if (i == 56 && j == 57)
			break;
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <string.h>


/**
 * main - Entry point
 *
 * Description: reverse alphabet
 *
 * Return: 0 (success)
*/
int main(void)
{	char i = 'z';
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

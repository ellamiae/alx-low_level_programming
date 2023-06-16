#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A c program that prints size
 *
 * Return: always 0 (Success)
 */
int main()
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}

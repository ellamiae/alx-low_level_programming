#include "main.h"

/**
 * _atoi - convert a string to an int
 *
 * @s: string parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{int sign = 1;
unsigned int num = 0;
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			brak;
	} while (*s++);
return (num * sign);
}

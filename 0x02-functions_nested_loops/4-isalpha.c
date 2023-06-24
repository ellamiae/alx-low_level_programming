#include"main.h"

/**
 * _isalpha - check if the caracter is letter
 *
 * @c: c chek is a caracter
 *
 * Return: 0 false and 1 true
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

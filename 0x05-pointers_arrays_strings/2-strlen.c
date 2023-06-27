#include "main.h"

/**
 * _strlen - the lenth of string
 *
 * @s: string parameter
 *
 * Return: the length
*/

int _strlen(char *s)
{int len;
for (len = 0; *s != '\0'; s++)
len = len + 1;
return (len);
}

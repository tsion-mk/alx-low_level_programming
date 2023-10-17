#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: a string of characters
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	while (s[i] != '\0')
	{
		len = i;
		i++;
	}
	return (len + 1);
}



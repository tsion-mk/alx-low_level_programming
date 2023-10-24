#include "main.h"

/**
 * _strspn - a function that gets the lengrh of a prefix substring
 * @s: string search
 * @accept: character set
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, found;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
			}
		}

		if (found == 0)
			break;
	}
	return (count);
}

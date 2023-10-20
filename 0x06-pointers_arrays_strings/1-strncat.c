#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: n numbers of characters are added to destinatio string
 *	from source string
 * Return: returns pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}

#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be checked
 * @c: a character to be checked in s
 * Return: a pointer to the first occurrence  of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *pc;

	i = 0;
	pc = 0;

	while (s[i] != '\0')
	{
		if (*(s + i) == c)
		{
			pc = &(s[i]);
			return (pc);
		}

		i++;
	}
	return (NULL);
}

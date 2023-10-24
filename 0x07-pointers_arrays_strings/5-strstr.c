#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 * @haystack: the string to be scanned
 * @needle: a set of characters
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;


		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
			if (*j == '\0')
			{
				return (haystack);
			}
	
	}
	return (NULL);
}



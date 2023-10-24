#include "main.h"

/**
 * _memset - a function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: the starting address where b is written
 * @b: character to be written in memory
 * @n: number of bytes
 * Return: a pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

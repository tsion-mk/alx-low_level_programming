#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to be cheked
 *
 * Return: 1 if c is lower case or return 0 otherwise
 */

int _islower(int c);

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


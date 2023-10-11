#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c : a character to be checked
 *
 * Return: 1 if c is a lette, lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c);

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

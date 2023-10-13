#include "main.h"
/**
 * _isupper - checks for upper case characters
 * @c: a charcater to be checked
 *
 * Return: returns 1 if c is upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include <stdio.h>

/**
 * main - prints the a - z
 *
 * Return: returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

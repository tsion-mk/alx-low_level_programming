#include <stdio.h>

/**
 * main - prints the alphabet in reverse z - a
 *
 * Return: returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

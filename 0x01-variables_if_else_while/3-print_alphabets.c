#include <stdio.h>

/**
 * main - prints the A - Z
 *
 * Return: returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

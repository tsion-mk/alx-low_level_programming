#include <stdio.h>

/**
 * main - prints the A - Z
 *
 * Return: returns 0
 */

int main(void)
{
	char ch, ch1;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
		putchar(ch1);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

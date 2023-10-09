#include <stdio.h>

/**
 * main - prints all the numbers of base16 in lower case
 *
 * Return: 0
 */

int main(void)
{
	char ch, ch1;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
		putchar(ch1);
	putchar('\n');

	return (0);
}

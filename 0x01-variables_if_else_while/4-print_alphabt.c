#include <stdio.h>

/**
 * main - prints the alpabet a-z except q and e
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}

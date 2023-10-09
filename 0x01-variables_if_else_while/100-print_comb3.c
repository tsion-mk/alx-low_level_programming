#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * and The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

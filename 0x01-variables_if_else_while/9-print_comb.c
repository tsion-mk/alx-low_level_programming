#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		putchar('0' + nm);
		if (nm == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

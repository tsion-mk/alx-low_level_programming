#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: return 0
 */

int main(void)
{
	long int  number;
	int i;

	number = 612852475143;

	for (i = 3; (i * i) <= number; i = i + 2)
	{
		while (number % i == 0)
		{
			printf("%d,", i);
			number = number / i;
		}
	}
	if (number > 2)
		printf("%d ", (int)number);

	printf("\n");
	return (0);

}

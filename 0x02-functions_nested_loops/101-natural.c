#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded),
 *
 * Return: returns 0
 */

int main(void)
{
	int nrl, sum;

	nrl = 0, sum = 0;

	while (nrl < 1024)
	{
		if (nrl % 3 == 0 || nrl % 5 == 0)
			sum = sum + nrl;
		nrl++;
	}

	printf("%d\n", sum);
}


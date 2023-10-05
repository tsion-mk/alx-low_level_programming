#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ul" sizeof(char));
	printf("Size of a int: %ul" sizeof(int));
	printf("Size of a long int: %ul" sizeof(long int));
	printf("Size of a long long int: %ul" sizeof(long long int));
	printf("Size of a float: %ul" sizeof(float));
    return (0);
}

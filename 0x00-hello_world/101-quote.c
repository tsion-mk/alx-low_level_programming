#include <stdio.h>
#include <unistd.h>
/**
 * main
 * * Return: 1 if success.
 */
int main(void)
{
	/* prints a string to a standard output using write*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

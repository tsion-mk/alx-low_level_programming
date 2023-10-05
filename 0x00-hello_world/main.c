#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Hello World";
	for (int i = 0; i < strlen(str); i++)
	{
		putchar(str);
	}
    return (0);

}

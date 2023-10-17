#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char *str;

        i = 0; j = 0;

        while (s[i] != '\0')
        {
                i++;
        }

        while (i >= 0)
        {
              *str = *s[i];
                i--;
        }
	while (str[j] != '\0')
	{
		*(s + j) = str[j];
		j++;
	}
	

}

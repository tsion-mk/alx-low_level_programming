#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void);

void jack_bauer(void)
{
	int day, hour, min, sec;

	for (day = 0; day <= 2; day++)
		for (hour = 0; hour <= 9; hour++)
		{
			if (day == 2 && hour == 4)
				break;
			for (min = 0; min <= 5; min++)
			{
				for (sec = 0; sec <= 9; sec++)
				{
					_putchar('0' + day);
					_putchar('0' + hour);
					_putchar(':');
					_putchar('0' + min);
					_putchar('0' + sec);
					_putchar('\n');
				}
			}
		}
}

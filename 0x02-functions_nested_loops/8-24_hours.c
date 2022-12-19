#include "main.h"
#include <stdio.h>

/**
 * jack_bauer  - function to print sign of a number
 *Return: zero or number value
*/

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
}

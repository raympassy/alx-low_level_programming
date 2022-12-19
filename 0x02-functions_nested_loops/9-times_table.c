#include "main.h"
#include <stdio.h>

/**
 * times_table  - function to print sign of a number
 *Return: zero or number value
*/

void times_table(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			int result = n * i;

			_putchar(',');
			_putchar(' ');
			(result <= 9) ?
				_putchar(' ') :
				_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}


#include "main.h"

/**
 * print_last_digit  - function to print sign of a number
 * @n: character to be checked
 *Return: zero or number value
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}

#include "main.h"

/**
 * print_sign - function to print sign of a number
 * @n: character to be checked
 *Return: zero or number value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	} else if (n == 0)
	{
		_putchar ('0');
		return (0);
	} else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}

#include "main.h"

/**
 * _abs - function to print sign of a number
 * @n: character to be checked
 *Return: zero or number value
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}

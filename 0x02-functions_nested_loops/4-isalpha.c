#include "main.h"

/**
 * _isalpha - function to print alphabet
 * @c: character to be checked
 *Return: zero or number value
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

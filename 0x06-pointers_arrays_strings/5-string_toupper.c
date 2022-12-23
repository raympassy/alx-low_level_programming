#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: string
 * Return: char
*/

char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] -= 32;
			x++;
		}
	}
	return (n);
}

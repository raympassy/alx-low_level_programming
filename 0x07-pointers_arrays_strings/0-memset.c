#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: source
 * @b: constant
 * @n: length of string
 * Return: a new string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

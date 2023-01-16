#include "main.h"

/**
 * _memcpy - copies byte from a memory data to another
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: new string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}


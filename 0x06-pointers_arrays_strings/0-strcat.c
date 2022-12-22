#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the string that will be concatenate
 * @src: source string
 * Return: a pointer to @dest string
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

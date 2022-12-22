#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: if str1 < str2, negative difference of the first unmatched char
 *  if str1 == str2, 0
 *  if str1 > str2, the positive difference of the first unmatched char
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 = s2);
}

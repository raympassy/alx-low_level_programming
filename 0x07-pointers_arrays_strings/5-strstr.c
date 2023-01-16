#include "main.h"

/**
 * _strstr - finds first occurrence of substring needle in string haystack
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer if string found, otherwise null
*/

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
				return (str1);
		haystack = str1 + 1;
	}
	return (0);
}

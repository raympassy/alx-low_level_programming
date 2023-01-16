#include "main.h"

/**
 * _strchr - identifies a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of the character c in the string
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0); /*values null*/
}

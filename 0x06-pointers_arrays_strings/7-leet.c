#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 *
 * Return: a pointer to the string
*/

char *leet(char *str)
{
	int a;
	int b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071"

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{
			if (str a == lower[b] || str[a] == upper[b])
			{
				str[a] = numbers[b];
				break;
			}
		}
	}
	return (str);
}

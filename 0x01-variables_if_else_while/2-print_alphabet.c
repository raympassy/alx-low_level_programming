#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print small later a to z
 *Return: zero or number value
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

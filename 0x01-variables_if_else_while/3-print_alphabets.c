#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print small later a to z
 *Return: zero or number value
*/

int main(void)
{
	char sm = 'a';
	char cp = 'A';

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	for (cp = 'A'; cp <= 'Z'; cp++)
	{
		putchar(cp);
	}
	putchar('\n');
	return (0);
}

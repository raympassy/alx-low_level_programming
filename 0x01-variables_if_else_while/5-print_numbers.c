#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print 0-9 base10 digits
 *Return: zero or number value
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

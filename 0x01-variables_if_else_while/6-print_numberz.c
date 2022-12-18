#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base10
 *Return: zero or number value
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

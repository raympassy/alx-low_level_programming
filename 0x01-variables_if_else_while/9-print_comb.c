#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all characters of base16 and a new line
 *Return: zero or number value
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all aphabets in reverse order and a new line
 *Return: zero or number value
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

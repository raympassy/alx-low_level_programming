#include "main.h"

/**
 * swap: swaps value for two integers
 * @a: first integer
 * @b: second integer
*/

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

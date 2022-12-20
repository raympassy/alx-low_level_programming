#include "main.h"

/**
 * swap_int - swaps value for two integers
 * @a: first integer a
 * @b: second integer b
*/

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

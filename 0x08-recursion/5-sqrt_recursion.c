#include "main.h"

/**
 * find_sqrt - returns the natural square root of a number
 * @num: the number to find the root
 * @root: natural square root
 * Return: square root or -1
*/
int find_sqrt(int num, int root)
{
	if (root % (num / root) == 0)
	{
		if (root * (num / root) == num)
			return (root);
	else
		return (-1);
	}
	return (0 + find_sqrt(num, root + 1));

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 2));
}

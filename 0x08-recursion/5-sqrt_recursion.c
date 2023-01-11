#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - returns the natural square root of a number
 * @num: the number to find the root
 * @root: the natural root
 * Return: natural root of number
 * if n has no natural root, return -1
*/
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
			return (root);
}

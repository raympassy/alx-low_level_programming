#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: On success 1
 * Return: on success 1
 * on error: -1 is returned, errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

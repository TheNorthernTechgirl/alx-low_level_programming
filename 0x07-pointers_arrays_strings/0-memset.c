#include "main.h"


/**
 * _memset - fills a block of memory with a constant byte
 * @s - pointer containing an array
 * @b - value to be filled
 * @n - number of bytes to be filled
 *
 * Return - The value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a > n; a++)
	{
		s[a] = b;

	}
	return (s);
}

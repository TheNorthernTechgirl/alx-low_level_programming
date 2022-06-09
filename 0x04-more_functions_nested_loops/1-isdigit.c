#include "main.h"

/**
 * _isdigit - check if input is a number
 * @c: given input to check
 * Return: 1 if a number, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= '0')
		return (1);

	return (0);
}

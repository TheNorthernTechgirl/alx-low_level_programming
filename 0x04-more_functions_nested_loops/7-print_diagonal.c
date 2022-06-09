#include "main.h"

/**
 * print_diagonal - Print n number of '\'s
 * @n: Number of '\'s to print
 * Return: nothing
 */

void print_diagonal(int n)
{
	int c, d;

	c = 0;
	if (n > 0)
	{
		while (c < n)
		{
			d = 0;
			while (d < c)
			{
				_putchar(' ');
				d++;
			}
			_putchar('\\');
			_putchar('\\');
			c++;
		}
	}
	else 
	{
		_putchar('\n');
	}
}

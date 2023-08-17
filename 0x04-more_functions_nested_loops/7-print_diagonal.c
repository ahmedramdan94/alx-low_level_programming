#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n : num of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int c = 0, d;

	while (c < n && n > 0)
	{
		d = 0;
		while (d < c)
		{
			_putchar(' ');
			d++;
		}

		_putchar('\\');
		_putchar('\n');
		c++;
	}
	if (c == 0)
		_putchar('\n');

}

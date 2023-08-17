#include "main.h"

/**
 * print_triangle - outputs tringle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int r = 1, t;

	while (r <= size && size > 0)
	{
		t = 0;
		while (t < size - r)
		{
			_putchar(' ');
			t++;
		}
		t = 0;
		while (t < r)
		{
			_putchar('#');
			t++;
		}

		_putchar('\n');
		r++;
	}
	if (r == 1)
		_putchar('\n');
}


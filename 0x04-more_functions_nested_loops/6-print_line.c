#include "main.h"

/**
 * print_line - print line with _
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{

	int l = 0;

	while (l < n && n > 0)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');

}

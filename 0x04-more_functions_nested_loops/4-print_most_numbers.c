#include "main.h"

/**
 * print_most_numbers - prints most expet 2& 4  numbers
 * Return:0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;

			_putchar('0' + num);
		}

	}
	_putchar('\n');

}

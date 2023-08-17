#include "main.h"

/**
 * more_numbers - output numbers in rows
 * Return:void
 */

void more_numbers(void)
{
	char num, count;
	int i = 0;


	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			count = num;
			if (num > 9)
			{
				_putchar('1');
				count = num % 10;
			}

			_putchar('0' + count);
		}

		_putchar('\n');
		i++;
	}

}

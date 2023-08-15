#include "main.h"

/**
 * print_last_digit - printout the last digit of a number
 * @n:  is the int to print digit
 * Return: integer value
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
		l = l * -1;

	_putchar(l + '0');

	return (l);
}

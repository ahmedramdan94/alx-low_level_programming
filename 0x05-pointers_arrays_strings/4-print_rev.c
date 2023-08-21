#include "main.h"
/**
 * print_rev - prints string in reverse, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');

}

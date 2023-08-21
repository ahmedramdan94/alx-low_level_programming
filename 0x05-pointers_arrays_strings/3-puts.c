#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int u = 0;

	while (str[u])
	{
		_putchar(str[u]);
		u++;
	}
	_putchar('\n');



}

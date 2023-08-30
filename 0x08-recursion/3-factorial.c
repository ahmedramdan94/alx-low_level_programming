#include "main.h"

/**
 * factorial - write factorial of given num
 * @r: int of given num
 * Return: int
 */

int factorial(int r)
{

	if (r < 0)
	{
		return (-1);
	}
	else if (r == 0)
	{
		return (1);
	}

	return (r * factorial(r - 1));
}

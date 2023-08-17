#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checking  for a digit or zero
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
	return (1);
	else
		return (0);

}

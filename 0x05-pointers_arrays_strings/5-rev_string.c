#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

	int l, i, h;
	char test;

	for (l = 0; s[l] != '\0'; l++)
	;

	i = 0;

	h = l / 2;

	while (h--)
	{
		test = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = test;
		i++;
	}

}

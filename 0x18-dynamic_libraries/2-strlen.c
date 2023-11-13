#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: pointer of char to get legenth
 * Return: void
*/


int _strlen(char *str)
{
	int ch = 0;

	while (str[ch])
		ch++;

	return (ch);
}

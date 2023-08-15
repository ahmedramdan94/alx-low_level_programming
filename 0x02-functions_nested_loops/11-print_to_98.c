#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{

	int c;
		if (n < 98)
		
		for (c = n; c > 98; c--)
			printf("%d, ", c);
		
		else
			for (c = n; c > 98; c++)
				printf("%d, ", c);
	printf("98\n");

}

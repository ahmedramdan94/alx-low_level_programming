#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print all single digit from 0 to 10
 * Return: alawys (0)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
	putchar(48 + num);
	num++;
}

putchar('\n');

return (0);
}

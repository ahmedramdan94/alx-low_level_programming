#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print numbers from 0 to 10
 * Return: alawys (0)
 */
int main(void)
{
char num = '0';
while (num <= '9')
{
	putchar(num);
	num++;
}

putchar('\n');

return (0);
}

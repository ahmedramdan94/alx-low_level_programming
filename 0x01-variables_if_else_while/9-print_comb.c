#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints all possible combinations of single-digit numbers
 * Return: always (0)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(48 + num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}

putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints hexadecimal base of 16
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}

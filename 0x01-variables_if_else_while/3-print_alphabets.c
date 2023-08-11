#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print alphabet in lowercase,after that in uppercase
 * Return: alawys (0)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}

alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}


putchar('\n');

return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print alphabet in lowercase expet e , q
 * Return: alawys (0)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
alpha++;

}

putchar('\n');

return (0);
}

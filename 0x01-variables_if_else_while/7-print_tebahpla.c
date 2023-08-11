#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print reverse alphabet in lowercase
 * Return: alawys (0)
 */
int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;

}

putchar('\n');

return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Descrption: take random num and
 * compare last digit of it with 5
 * Return: always (0)
 */
int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
printf("the number is %i and last digit is %i, is greater than 5\n", n, l);
else if (l == 0)
printf("the number is %i and last digit is %i ,is 0\n", n, l);
else if (l < 6)
printf("the number is %i and last digit is %i ,is less than 6\n", n, l);

return (0);
}

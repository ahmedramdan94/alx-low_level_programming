#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function
* Description: this program output every time different value
* and print if it poss,natgtive or zero
* Return: 0 (succses)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
return (0);
}

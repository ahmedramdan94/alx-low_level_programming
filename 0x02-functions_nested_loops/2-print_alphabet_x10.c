#include "main.h"

/**
 * print_alphabet_x10 -func  print alphabet in lowercase 10 times
 * Return:(void)
 */

void print_alphabet_x10(void)
{
char s;
int l;
for (l = 0; l <= 9; l++)
{
for (s = 'a'; s <= 'z'; s++)
_putchar(s);
_putchar('\n');
}
}

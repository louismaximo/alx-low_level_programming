#include "holberton.h"
/**
 *print_alphabet_x10 - hello
 *Return:returns nothing
 */
void print_alphabet_x10(void)
{
char alpha;
int i = 0;
while (i < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
i++;
}
}


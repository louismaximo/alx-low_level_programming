#include "holberton.h"
/**
 *print_chessboard- prints the chessboard
 * @a: char**
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
int x, y;
for (y = 0; y < 8; y++)
{
for (x = 0; x < 8; x++)
{
_putchar(a[y][x]);
}

_putchar('\n');
}
}

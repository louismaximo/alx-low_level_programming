#include "holberton.h"
#include <stdio.h>
/**
 * main - print fizz and buzz in the given condition
 * @i: integer
 * Return: void
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz");
}
else if (i % 3 == 0)
{
printf("%s", "Fizz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}


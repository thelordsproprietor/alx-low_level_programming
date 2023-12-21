#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -serves as the starting point for program execution
 * Return: returns the value zero after program is run
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

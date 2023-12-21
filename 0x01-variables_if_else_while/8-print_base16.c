#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -serves as the starting point for program execution
 * Return: returns the value zero after program is run
 */
int main(void)
{
int x = 0;
char y;
for (x = 0; x < 10; x++)
{
putchar(48 + x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}

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
for (x = 0; x < 10; x++)
{
putchar(48 + x);
}
putchar('\n');
return (0);
}

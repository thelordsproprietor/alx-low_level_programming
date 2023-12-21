#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -serves as the starting point for program execution
 * Return: returns the value zero after program is run
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}

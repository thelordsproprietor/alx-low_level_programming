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
char y;
for (x = 'a' ; x <= 'z' ; x++)
{
putchar (x);
}
for (y = 'A' ; y <= 'Z' ; y++)
{
putchar (y);
}
putchar ('\n');
return (0);
}

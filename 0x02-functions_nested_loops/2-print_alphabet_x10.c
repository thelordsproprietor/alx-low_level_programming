#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase and newline 10 times
 */
void print_alphabet_x10(void)
{
char x;
int n;
for (n = 0 ; n < 10 ; n++)
{
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase and newline
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}

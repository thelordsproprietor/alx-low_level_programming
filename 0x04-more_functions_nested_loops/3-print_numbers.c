#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
    int x;
    for (x = 48; x <= 57; x++)
    {
        putchar(x);
    }
    putchar('\n');
}

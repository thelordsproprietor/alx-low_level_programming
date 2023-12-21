#include <stdio.h>
#include "main.h"
/**
 * print_line - prints n number of underscores to make straight line .
 * @n: number of _ characters to be printed.
 */
void print_line(int n)
{
		int x;
		if (n > 0)
		{
			for (x = 0; x < n; x++)
			putchar(95);
		}
		putchar('\n');
}

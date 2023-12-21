#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
	int hash, space;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for ((space = size - hash); space > 0; space--)
				putchar(' ');

			for (space = 0; space < hash; space++)
				putchar('#');

			if (hash == size)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int len, w;
	if (size > 0)
	{
		for (w = 0 ;w < size; w++)
		{
			for (len = 0; len < size; len++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	putchar('\n');
	}
}

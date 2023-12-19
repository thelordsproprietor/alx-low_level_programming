#include <stdio.h>
#include "main.h"
/**
 * print_sign - Determines whether an integer is positive, negative or zero.
 * @n: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(45);
		return (0);
	}
	else
	{
		putchar(48);
		return (-1);
	}
}

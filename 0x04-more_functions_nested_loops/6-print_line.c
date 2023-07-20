#include "main.h"
#include <stdio.h>

/**
 * print_line - Drawing straight lines with c.
 * @n: How long line would be.
 * Return: No return.
 */
void print_line(int n)
{
	int l;

	for (l = 1; l <= n ; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

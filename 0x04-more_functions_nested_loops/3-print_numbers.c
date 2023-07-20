#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers 0 to 9.
 * @n - to print 0-9
 * Return: No return.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}

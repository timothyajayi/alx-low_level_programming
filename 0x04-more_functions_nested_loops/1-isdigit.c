#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check for digits from 0 to 9.
 * @i: Input digit.
 * Return: 1 if is digit, 0 otherwise.
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * 3-islower.c - Check if it is in lowercase.
 * write the lowercase
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

		_putchar('\n');
}

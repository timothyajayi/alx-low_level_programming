#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: as first int
 * @b: as second int
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

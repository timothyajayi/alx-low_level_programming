#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first character -char
 *@size: second character -int
 */
void print_diagsums(int *a, int size)
{
	int i, j, sums_1 = 0, sums_2 = 0, k, l = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sums_1 += a[l];
			if (j == k)
				sums_2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sums_1, sums_2);
}

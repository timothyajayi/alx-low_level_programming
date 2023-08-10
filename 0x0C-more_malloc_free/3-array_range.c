#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - lenght of integers
 * @min: min integers
 * @max: max integers
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	for (j = 0; j < (max - min); j++)
		;

	arr = malloc(sizeof(int) * (j + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}

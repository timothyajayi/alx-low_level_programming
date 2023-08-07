#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *) malloc(size);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}

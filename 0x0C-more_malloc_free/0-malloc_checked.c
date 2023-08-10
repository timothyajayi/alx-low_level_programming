#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: pointer to the new memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *) malloc(size);

	if (p == NULL)
		exit(98);
	return (p);
}

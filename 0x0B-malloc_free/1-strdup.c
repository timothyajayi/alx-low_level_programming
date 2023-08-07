#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates a string into newly allocated array
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *p;
	int i, n;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;
	p = (char *) malloc(n + 1);

	if (p == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[n] = '\0';
	return (p);
}


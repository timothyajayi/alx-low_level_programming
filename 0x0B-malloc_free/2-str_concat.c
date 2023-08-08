#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int size;
	int i;

	size = (len1 + len2 + 1);

	p = calloc(size, sizeof(char));

	for (i = 0; i < len1; i++)
	p[i] = s1[i];

	for (i = 0; i < len2; i++)
	p[len1 + i] = s2[i];
	p[size - 1] = '\0';
	return (p);
}

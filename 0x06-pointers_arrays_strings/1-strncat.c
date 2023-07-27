#include "main.h"
/**
*_strncat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: the number bytes from src
*
*Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}

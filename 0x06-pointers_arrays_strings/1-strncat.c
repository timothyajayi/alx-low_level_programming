#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: the number bytes from src
*
*Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = *dest;
	len2 = *src;

	for (i = 0; i < n && len2; i++)
{
	dest[len1 + i] = src[i];
}
	return (dest);
}

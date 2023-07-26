#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = *dest;
	len2 = *src;

	for (i = 0; len2[i] !='\0'; i++)
{
	dest[len1 + i] = src[i];
}
		return (dest);
}

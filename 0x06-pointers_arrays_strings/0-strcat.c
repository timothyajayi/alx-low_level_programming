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
	int i;


	for (i = 0; dest[i]!= '\0'; i++)
{
	dest[i] = src[i];
}
		return (dest);
}

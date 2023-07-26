#include "main.h"
/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	char str1;
	char str2;
	int i;

	str1 = *dest;
        str2 = *src;

	for (i = 0; i <= n && str2; i++)
	{
		str1(i) = '\0';
	}

	return (dest);
}

#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int temp = 0;

	while (*s)
	{
		while (accept[temp] != '\0')
		{
			if (*s == accept[temp])
				return (s);
			temp++;
		}
		temp = 0;
		s++;
	}
	return ('\0');
}

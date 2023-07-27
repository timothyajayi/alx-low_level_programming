#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 * @hi: the string
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int i;

	for (i = 0; hi[i] != '\0'; i++)
	{
	if (hi[i] >= 'a' && hi[i] <= 'a')
	{
		hi[i] = hi[i] - 32;
	}
	}
	return (hi);
}

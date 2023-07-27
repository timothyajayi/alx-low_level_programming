#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @str: the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *str)
{
	int i, j, convert;

	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
	str[i] = str[i] + convert;
	}
	convert = 0;
	for (j = 0; chars[j] != '\0'; j++)
	{
		if (chars[j] == str[i])
		{
			convert = 32;
			break;
		}
	}
	
	}
	return (str);
	
}

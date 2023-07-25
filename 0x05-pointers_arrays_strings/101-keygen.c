#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */


int main(void)
{
	int count, num, random;

	num = 0;
	count = 0;
	random = 0;
	
	char password [80];

	srand(time(NULL));

	while (num < 2772)
	{

		if (2772 - num < 48)
	{
		num -= password[--count];
	}
		else if (2772 - num <= 126)
		{
			random = 2772 - num;
		}
		else
		{
			random = rand() % (126 - 48) + 48;
		}

		if (random)
		{
			password[count++] = random;
			num += random;
		}
		random = 0;
	}

	password[count] = '\0';
	printf("%s\n", password);

	return 0;
}

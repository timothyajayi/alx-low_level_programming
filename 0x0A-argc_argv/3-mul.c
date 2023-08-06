#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * atoi: is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc != 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	result = result * atoi(argv[i]);
	printf("argv [%d] = %s\n", i,  argv[i]);
	}

	printf("The multiples of result is %d\n", result);


	return (0);
}

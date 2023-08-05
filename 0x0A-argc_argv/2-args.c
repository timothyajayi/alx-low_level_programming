#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}

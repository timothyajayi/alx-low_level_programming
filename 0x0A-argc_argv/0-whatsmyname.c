#include <stdio.h>
/**
 * main - prints its name + \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d", argc);
	printf("argv[0] %s\n", argv[0]);
	return (0);
}

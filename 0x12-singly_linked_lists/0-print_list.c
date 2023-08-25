#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list.
 *
 * @h: This take the value of the single list
 *
 * Return: Return: the number of nodes in the list
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		num = num + 1;
		h = h->next;
	}
	return (num);
}

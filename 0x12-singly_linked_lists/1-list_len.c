#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * @list_len - function that returns the number of elements with a single linked list
 *
 * @h: This is the single linked list
 *
 * Return: The number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
	num = num + 1;
	h = h->next;
	}
	return (num);
}

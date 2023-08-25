#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
* list_len - list of the num
*
* @h: Points to struct
*
* Return: Num of elements
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

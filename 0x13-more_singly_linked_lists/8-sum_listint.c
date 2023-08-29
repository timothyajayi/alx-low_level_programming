#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all data in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}

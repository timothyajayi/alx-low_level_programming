#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
	current = current->next;
	index--;
	}

	return (current);
}

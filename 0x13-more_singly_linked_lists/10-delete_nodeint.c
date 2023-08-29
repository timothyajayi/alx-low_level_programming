#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list
 * @head: A pointer to the pointer of the first node in the list
 * @index: The index of the node to be deleted
 * Return: 1 if deletion succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0) {
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	listint_t *previous = NULL;
	listint_t *current = *head;
	unsigned int i;

	for (i = 0; i < index; i++) {
	if (current == NULL)
	return (-1);

	previous = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list
 * @head: A pointer to the pointer of the first node in the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	listint_t *prev_node = *head;
	for (unsigned int i = 0; i < index - 1 && prev_node != NULL; i++)
	{
	prev_node = prev_node->next;
	}

	if (prev_node == NULL || prev_node->next == NULL)
	return (-1);

	listint_t *delete_node = prev_node->next;
	prev_node->next = delete_node->next;

	free(delete_node);

    return (1);
}

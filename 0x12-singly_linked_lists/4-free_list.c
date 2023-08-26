#include <stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
* free_list - function that free a list
*
* @head: Head of node
*
*
* Return: void
*/

void free_list(list_t *head)
{
	while(head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

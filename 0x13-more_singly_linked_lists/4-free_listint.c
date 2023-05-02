#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a list.
 * @head: pointer to the first node of the list to free
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

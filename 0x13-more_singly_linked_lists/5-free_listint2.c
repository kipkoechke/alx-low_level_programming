#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

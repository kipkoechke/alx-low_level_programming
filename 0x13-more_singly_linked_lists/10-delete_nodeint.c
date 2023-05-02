#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index -  function that deletes the node
  * at index linked list.
  * @head: head of the list
  * @index: location of the node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *present, *later;

	if (!head || !*head)
		return (-1);
	present = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		present = present->next;
		if (present == NULL)
			return (-1);
	}
	later = present->next;
	present->next = later->next;
	free(later);
	return (1);
}

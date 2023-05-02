#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - function that inserts a new node
  * at a given position.
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *insert;

	current = *head;
	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;
	if (index == 0)
	{
		insert->next = current;
		*head = insert;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(insert);
			return (NULL);
		}
	}
	insert->next = current->next;
	current->next = insert;
	return (insert);
}

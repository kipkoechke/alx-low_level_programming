#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * get_nodeint_at_index - function that returns
  * the nth node of a  linked list.
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data of a linked list.
 * @head: pointer to the head of the list
 *
 * Return: Value of a node index.
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: name of the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	if(h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}

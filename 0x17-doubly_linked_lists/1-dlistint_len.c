#include "lists.h"

/**
* dlistint_len - a function that returns the number of
* elements in a linked dlistint_t list.
* @h: Header of linkedlist.
* Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

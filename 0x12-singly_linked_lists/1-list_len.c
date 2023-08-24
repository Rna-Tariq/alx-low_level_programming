#include "lists.h"

/**
* list_len - a function that returns the number of
* elements in a linked list_t list.
*
* @h: pointer to the list_t list to be printed
*
* Return: the number of elements in a linked.
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str)
		{
			len++;
			h = h->next;
		}
	}
	return (len);
}


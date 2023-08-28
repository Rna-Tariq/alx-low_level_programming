#include "lists.h"

/**
* listint_len - a function that returns the number of
* elements in a linked listint_t list.
*
* @h: pointer to the list_t list.
*
* Return: the number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("0\n");
		}
		else
		{
			h = h->next;
			s++;
		}
	}
	return (s);
}

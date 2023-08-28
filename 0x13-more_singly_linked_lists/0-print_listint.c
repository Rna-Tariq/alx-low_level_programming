#include "lists.h"

/**
* print_listint - a function that prints all the elements of a listint_t list.
*
* @h: a pointer that refers to the list.
*
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%i\n", h->n);
		}
		h = h->next;
		s++;
	}
	return (s)
}

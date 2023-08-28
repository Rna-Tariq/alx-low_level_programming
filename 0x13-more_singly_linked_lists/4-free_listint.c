#include "lists.h"

/**
* free_listint - free_listint.
*
* @head: a pointer that refers to the list.
*
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

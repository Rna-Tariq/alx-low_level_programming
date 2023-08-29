#include "lists.h"

/**
* sum_listint - a function that returns the sum of
* all the data (n) of a listint_t linked list.
*
* @head: a pointer to the list.
*
* Return: returns the sum of all the
* data (n) of a listint_t linked list.
* OR if the list is empty, return 0.
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

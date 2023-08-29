#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a
* listint_t linked list, and returns the head node’s data (n).
*
* @head: double pointer to the list.
*
* Return: returns the head node’s data (n)
* OR if the linked list is empty return 0.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		num = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (num);
	}
}

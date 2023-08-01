#include "lists.h"

/**
 * pop_listint - deletes Head Node of linked lists
 * @head: pointer to first element
 *
 * Return: Data deleted,
 * or if empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

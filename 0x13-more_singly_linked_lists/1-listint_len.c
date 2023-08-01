#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list.
 * @h: Pointer to the linked list of type listint_t to count elements in.
 *
 * Return: Number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}


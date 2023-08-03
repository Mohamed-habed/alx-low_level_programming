#include "lists.h"
/**
 * listint_len - returns the number of elements that is in the Linked Lists
 * @h: type for Linked list for traverse listint_t
 *
 * Return: nodes Number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num += 1;
		h = h->next;
	}

	return (num);
}


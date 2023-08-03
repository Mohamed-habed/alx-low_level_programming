#include "lists.h"

/**
 * free_listint_safe - frees a Linked list
 * @h: pointer to The first node inside the linked list
 *
 * Return: number of elements inside The freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len += 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			len += 1;
			break;
		}
	}

	*h = NULL;

	return (len);
}


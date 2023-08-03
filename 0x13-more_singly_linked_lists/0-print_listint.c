#include "lists.h"
/**
 * Print_listint - Prints whole elements of The  linked list
 * @h: The list linked for  type listint_t to print
 *
 * Return : nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}

	return (num);
}


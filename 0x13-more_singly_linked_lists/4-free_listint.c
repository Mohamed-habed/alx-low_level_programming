#include "lists.h"

/**
 * free_listint - frees  Linked List
 * @head: listint_t list To Be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


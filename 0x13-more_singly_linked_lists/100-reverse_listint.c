#include "lists.h"

/**
 * reverse_listint - reverses in A Linked List
 * @head: pointer The First node inside the List
 *
 * Return: Pointer The first To node in the New list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}


#include "lists.h"

/**
 * pop_listint - deletes The Head node OF a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The Data inside THE elements that was deleted,
 * 0 Or If the LIst is empty
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


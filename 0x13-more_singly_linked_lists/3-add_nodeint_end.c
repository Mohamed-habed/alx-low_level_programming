#include "lists.h"

/**
 * add_nodeint_end - adds a node At The end of a linked list
 * @head: pointer to the first element inside The list
 * @n: data to insert in The New Element
 *
 * Return: pointer to The New node, or NULL If it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}


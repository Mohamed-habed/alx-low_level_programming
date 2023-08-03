#include "lists.h"
/**
 * add_nodeint - adds a New node at The Beginning of The  linked list
 * @head: pointer to the First node in the List
 * @n: the data to insert in The New node
 *
 * Return: Pointer the New node, or the NULL If it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


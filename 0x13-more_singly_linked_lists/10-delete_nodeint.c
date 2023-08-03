#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the Linked List at certain index
 * @head: pointer for the First eEementI in list
 * @index: index for The node of Delete
 *
 * Return: -1 (Fail), or 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i += 1;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}


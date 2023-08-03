#include "lists.h"

/**
 * get_nodeint_at_index - returns the node AT a Certain index In a Linked List
 * @head: First node inside The linked list
 * @index: index of The node To return
 *
 * Return: pointer To The node we're Looking For, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i =+ 1;
	}

	return (temp ? temp : NULL);
}


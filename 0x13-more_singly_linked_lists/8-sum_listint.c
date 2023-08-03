#include "lists.h"

/**
 * sum_listint - calculates the sum for all the data in the  listint_t list
 * @head: First node In The Linked List
 *
 * Return: Resulting Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


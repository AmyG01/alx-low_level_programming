#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: First node in the linked list.
 *
 * Return: Resulting sum of all the data (n).
 * 		   If the list is empty, return 0.
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

#include "lists.h"

/**
 * get_nodeint_at_index - Locates the nth node of
 *                        a listint_t linked list.
 * @head: First node in the linked list.
 * @index: Index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

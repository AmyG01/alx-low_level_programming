#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the first node in the list.
 * @idx: The index of the list where the new node
 *       should be added. Index starts at 0.
 * @n: Integer to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 *	   If it is not possible to add the new node at index idx,
 *	   Do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i;
        listint_t *new;
        listint_t *temp = *head;

        new = malloc(sizeof(listint_t));
        if (!new || !head)
                return (NULL);

        new->n = n;
        new->next = NULL;

        if (idx == 0)
        {
                new->next = *head;
                *head = new;
                return (new);
        }

        for (i = 0; temp && i < idx; i++)
        {
                if (i == idx - 1)
                {
                        new->next = temp->next;
                        temp->next = new;
                        return (new);
                }
                else
                        temp = temp->next;
        }

        return (NULL);
}

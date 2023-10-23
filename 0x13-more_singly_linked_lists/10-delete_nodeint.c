#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a specific index in the list
 * @head: A pointer to the head of the list
 * @index: The index of the node to delete
 *
 * Return: 1 if successful, -1 if the node does not exist
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;
    for (i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index from a list
 *
 * @head: A pointer to the first node of the list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int p = 0;

    if (head == NULL || *head == NULL) 
        return (-1);

    tmp = *head;

    /* Traverse to the node at index */
    while (p < index && tmp != NULL)
    {
        tmp = tmp->next;
        p++;
    }

    /* If index is out of range */
    if (tmp == NULL)
        return (-1);

    /* If deleting the head node */
    if (index == 0)
    {
        *head = tmp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    }
    else
    {
        /* Unlink the node */
        tmp->prev->next = tmp->next;
        if (tmp->next)
            tmp->next->prev = tmp->prev;
    }

    free(tmp); 
    return (1);
}


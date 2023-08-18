#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	dlistint_t *temp = *head;
	unsigned int len = 0;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (len == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		len++;
	}
	return (-1);
}

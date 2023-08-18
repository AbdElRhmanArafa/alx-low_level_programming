#include "lists.h"
/**
 * get_dnodeint_at_index - Get the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 * Return: Pointer to the nth node, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempList = head;
	unsigned int len = 0;

	while (tempList != NULL)
	{
		if (len == index)
			return (tempList);

		len++;
		tempList = tempList->next;
	}

	return (NULL);
}

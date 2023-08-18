#include "lists.h"
/**
 *  insert_dnodeint_at_index - add node at specifics place
 * @h: point of Head
 * @idx: index
 * @n: value od new node
 * Return: newlist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode;
	unsigned int len = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
		add_dnodeint(h, n);

	while (temp != NULL)
	{
		if (len == idx)
		{
			newNode->next = temp;
			newNode->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = newNode;
			temp->prev = newNode;
			return (newNode);
		}
		len++;
		temp = temp->next;
	}
	if (len == idx)
		add_dnodeint_end(h, n);
	free(newNode);
	return (NULL);
}

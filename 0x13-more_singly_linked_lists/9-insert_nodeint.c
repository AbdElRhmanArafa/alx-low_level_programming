#include "lists.h"
/**
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp = *head, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	while (temp)
	{
		if (count == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}

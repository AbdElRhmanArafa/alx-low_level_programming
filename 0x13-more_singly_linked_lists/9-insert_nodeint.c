#include "lists.h"
/**
 * insert_nodeint_at_index - inserts  new node in a linked list,
 * at a given position
 * @head: pointer to the first node  the list
 * @idx: index where the new node  added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
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

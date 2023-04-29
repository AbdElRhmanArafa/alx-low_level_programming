#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head;
	listint_t *prevNode = NULL;
	unsigned int count = 0;
	
	if (*head == NULL)
		return (-1);


	while (currentNode != NULL)
	{
		if (count == index)
		{
			if (prevNode == NULL)
				*head = currentNode->next;
			else
				prevNode->next = currentNode->next;
			free(currentNode);
			return (1);
		}
		prevNode = currentNode;
		currentNode = currentNode->next;
		count++;
	}

	return (-1);
}

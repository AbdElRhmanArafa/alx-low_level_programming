#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	/* If the head pointer is NULL, return immediately */
	if (head == NULL || *head == NULL)
		return;

	/* Loop through the list and free each node */
	while (*head != NULL)
	{
		listint_t *temp = (*head)->next; /* Save next node pointer */

		free(*head); /* Free the current node */

		*head = temp; /* Move to the next node */
	}

	/* Set the head pointer to NULL */
	*head = NULL;
}
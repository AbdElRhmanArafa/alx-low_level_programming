#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	/* If the head pointer is NULL, return immediately */
	if (head == NULL || *head == NULL)
		return;

	/* Loop through the list and free each node */
	while (*head)
	{
		listint_t *temp = (*head)->next; /* Save next node pointer */

		free(*head); /* Free the current node */

		*head = temp; /* Move to the next node */
	}

	/* Set the head pointer to NULL */
	*head = NULL;
}

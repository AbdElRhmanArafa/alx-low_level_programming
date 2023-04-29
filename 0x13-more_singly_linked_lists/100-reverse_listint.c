#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *preTemp = NULL, *currentTemp = *head, *h = *head;

	while (currentTemp)
	{
		currentTemp = currentTemp->next;
		h->next = preTemp;
		preTemp = h;
		h = currentTemp;
	}
	*head = preTemp;
	return (preTemp);
}

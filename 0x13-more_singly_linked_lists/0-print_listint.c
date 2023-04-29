#include "lists.h"

/**
 * print_listint - function that prints all the elements of  listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *templateNode = h;
	unsigned int count = 0;

	while (templateNode != NULL)
	{
		printf("%d\n", templateNode->n);
		templateNode = templateNode->next;
		count++;
	}

	return (count);
}

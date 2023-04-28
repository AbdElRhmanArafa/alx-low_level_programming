#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *template_node = h;
	unsigned int count = 0;

	while (template_node != NULL)
	{
		printf("%d\n", template_node->n);
		template_node = template_node->next;
		count++;
	}

	return (count);
}

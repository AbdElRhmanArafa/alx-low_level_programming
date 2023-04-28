#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print
 * Return: Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *template_node = h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	while (template_node)
	{
		printf("%d\n", template_node->n);
		template_node = template_node->next;
		count++;
	}
	return (count);
}

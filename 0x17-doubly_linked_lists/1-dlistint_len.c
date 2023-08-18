#include "lists.h"
/**
 * dlistint_len - length of  list
 * @h: header of list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}

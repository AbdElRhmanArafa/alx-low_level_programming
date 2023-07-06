#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with  loop safely.
 * @head: pointer  the 1st node of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *current = head, *prev = NULL;
	size_t count = 0;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= prev)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			return (98);
		}

		prev = current;
		current = current->next;
	}

	return (count);
}

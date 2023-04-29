#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *tmplist = head;

	while (tmplist)
	{
		sum += tmplist->n;
		tmplist = tmplist->next;
	}
	return (sum);
}

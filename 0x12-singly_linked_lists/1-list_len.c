#include "lists.h"
/**
 * list_len - length of list
 *  @h: header
 *  Returns: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

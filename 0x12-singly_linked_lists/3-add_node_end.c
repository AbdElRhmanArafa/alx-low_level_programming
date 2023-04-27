#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->len = strlen(str);
	newNode->str = strdup(str);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp->next = newNode;
	return (newNode);
}
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial_node, *next_node;

	if (!head)
		return (NULL);

	initial_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = initial_node;
		initial_node = *head;
		*head = next_node;
	}
	*head = initial_node;
	return (*head);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *head_node = *head;

	if (!head_node)
		return (0);

	data = (*head)->n;
	*head = head_node->next;
	free(head_node);
	return (data);
}

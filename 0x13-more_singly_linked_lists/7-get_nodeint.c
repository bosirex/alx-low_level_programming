#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int count = 0;

	while (nth_node && count != index)
	{
		count++;
		nth_node = nth_node->next;
	}
	if (nth_node && count == index)
		return (nth_node);
	return (NULL);
}

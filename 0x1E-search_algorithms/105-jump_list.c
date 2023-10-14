#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located or
 * if value is not present in head or if head is NULL, return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *min =  NULL, *max = NULL;
	size_t bound = 0;

	if (list != NULL)
	{
		min = list;
		max = list;
		while (max->next != NULL && max->index < size && max->n < value)
		{
			min = max;
			bound += sqrt(size);
			while (max->index < bound && max->next != NULL)
				max = max->next;
			printf("Value checked at index [%lu] = [%d]\n", max->index, max->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       min->index, max->index);
		while (min != NULL && min->index < size && min->index <= max->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", min->index, min->n);
			if (min->n == value)
				return (min);
			min = min->next;
		}
	}
	return (NULL);
}

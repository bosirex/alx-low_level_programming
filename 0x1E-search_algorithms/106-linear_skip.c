#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *my_list;

	if (list == NULL)
		return (NULL);

	my_list = list;

	do {
		list = my_list;
		my_list = my_list->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)my_list->index, my_list->n);
	} while (my_list->express && my_list->n < value);

	if (my_list->express == NULL)
	{
		list = my_list;
		while (my_list->next)
			my_list = my_list->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)my_list->index);

	while (list != my_list->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}

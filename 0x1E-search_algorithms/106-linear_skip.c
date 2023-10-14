#include "search_algos.h"


/**
 * linear_skip - searches for a value conatined in a skip list; assumes a
 * list with sorted values and a single skip layer with nodes at every index
 * which is a multiple of the square root of the size of the list
 *
 * @list: pointer to the head of the skip list to traverse
 * @value: value to search for
 * Return: pointer on the first node where value is located, or NULL if list
 * is NULL or value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	tmp = list;
	while (tmp && tmp->express && tmp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->express->index, tmp->express->n);
		tmp = tmp->express;
	}
	stop = tmp;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* value potentially lies between two express nodes */
	if (tmp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->express->index, tmp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tmp->index, tmp->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tmp->index, stop->index);

	while (tmp != stop && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       tmp->index, tmp->n);

	if (tmp == stop)
		return (NULL);
	return (tmp);
}

#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
	{
		return (-1);
	}

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%li] = [%i]\n", k, array[k]);
		if (array[k] == value)
		{
			return (k);
		}
	}
	return (-1);
}

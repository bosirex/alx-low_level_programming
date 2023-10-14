#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = 0, j = 0;

	if (array != NULL)
	{
		while (max < size && array[max] < value)
		{
			min = max;
			max = max + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       min, array[min]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       min, max);
		for (j = min; j <= max; j++)
		{
			if (j < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}

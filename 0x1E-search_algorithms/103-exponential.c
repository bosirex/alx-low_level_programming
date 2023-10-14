#include "search_algos.h"
/**
 * b_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @low: Left index in the array
 * @high: right index in the array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t left = low;
	size_t right = high - 1;
	size_t middle = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t boundary = 1, minimum = 0;
	int result;

	if (array != NULL)
	{
		while (boundary < size && array[boundary] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", boundary, array[boundary]);
			boundary *= 2;
		}
		if (boundary + 1 < size)
			minimum = boundary + 1;
		else
			minimum = size;
		printf("Value found between indexes [%lu] and [%lu]\n", boundary / 2, minimum - 1);
		result = b_search(array, boundary / 2,  minimum, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}

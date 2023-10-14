#include "search_algos.h"

/**
 * linear_search - search in linear format
 * @array: pointer to array to search
 * @size: array length
 * @value: value to bes searched in array
 * Return: index match is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array != NULL)
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (array[index] == value)
			{
				return (index);
			}
		}
	return (-1);
}

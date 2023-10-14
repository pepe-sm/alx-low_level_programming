#include "search_algos.h"

/**
 * advanced_binary - advanced binary_search
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to search
 * Return: match
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t index, len;

	index = 0;
	len = size - 1;

	if (array != NULL)
		return (recursi_advanced_binary(array, index, len, value));
	else
		return (-1);
	return (-1);
}
/**
 * recursi_advanced_binary - recursi_advanced_binary
 * @array: pointer to array
 * @izq: index
 * @der: len to traverse
 * @value: value to find
 * Return: match at index
 * Description: Fuction
 */

int recursi_advanced_binary(int *array, size_t izq, size_t der, int value)
{
	size_t i;
	size_t med;

	if (izq <= der)
	{
		med = (izq + der) / 2;
		printf("Searching in array: ");
		for (i = izq; i < der; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[der]);
		printf("\n");
		if ((value == array[med]) && ((izq == med) || (value != array[med - 1])))
			return (med);
		else if (value <= array[med])
			der = med;
		else
			izq = med + 1;
		return (recursi_advanced_binary(array, izq, der, value));
	}
	return (-1);
}

#include "search_algos.h"

/**
 * binary_search - use binary search
 * @array: pointer to array
 * @size: size of the array
 * @value: value to e searched
 * Return: match
 * Description: Fuction
 */
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int index, der, med, i;

		index = 0;
		der = size - 1;

		while (index <= der)
		{
			med = (index + der) / 2;
			printf("Searching in array: ");
			for (i = index; i < der; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d", array[der]);
			printf("\n");
			if (value == array[med])
				return (med);
			else if (value < array[med])
				der = med - 1;
			else
				index = med + 1;
		}
		return (-1);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array of
 * int using linear search
 * @array: an array of integers
 * @size: The size of the array
 * @value: The number to be searched for
 * Return: This always returns EXIT_SUCCESS
*/
int linear_search(int *array, size_t size, int value)
{
	int ix;

	if (array == NULL)
		return (-1);

	for (ix = 0; ix < (int)size; ix++)
	{
		printf("Value checked array[%u] = [%d]\n", ix, array[ix]);
		if (value == array[ix])
			return (ix);
	}
	return (-1);
}

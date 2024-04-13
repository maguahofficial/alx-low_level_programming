#include "search_algos.h"

/**
 * binary_search - This Function does a binary search
 * to find the target value
 * @array: Int array given
 * @size: size of the given array
 * @value: The value to search for
 * Return: Returns the index of the target value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int beginx = 0, endx = (int)size - 1;
	int midx = 0, temp = 0;

	if (array == NULL)
		return (-1);

	while (beginx <= endx)
	{
		temp = beginx;
		printf("Searching in array: ");
		while (temp <= endx)
		{
			printf("%d", array[temp]);
			if (temp != endx)
				printf(", ");
			temp++;
		}
		printf("\n");
		midx = (endx + beginx) / 2;
		if (array[midx] == value)
			return (midx);
		else if (array[midx] < value)
			beginx = midx + 1;
		else
			endx = midx - 1;
	}

	return (-1);
}

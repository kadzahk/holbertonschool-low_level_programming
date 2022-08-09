#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value is the value to search for
* Return: first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int i = 0, counter = 0, limit = (int)size - 1, mid = 0;

	if (!array)
		return (-1);
	while (limit >= counter)
	{
		printf("Searching in array: ");
		for (i = counter; i <= limit; i++)
		{
			printf("%i", array[i]);
			if (i != limit)
				printf(", ");
			else
				printf("\n");
		}
		mid = (counter + limit) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			limit = mid - 1;
		else
			counter = mid + 1;
	}
	return (-1);
}
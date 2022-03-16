#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on array
 * @array: pointer to array
 * @size: number elements in array
 * @action: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}

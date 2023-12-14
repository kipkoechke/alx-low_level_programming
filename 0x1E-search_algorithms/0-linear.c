#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value) 
{
	size_t index;
	
	/* Return -1 if array is NULL */
	if (array == NULL)
		return -1;

	/* Iterate over each element in the array */
	for (size_t i = 0; i < size; i++)
	{
	/* Print the current element */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* Return the index if the current element is equal to value */
		if (array[i] == value)
		{
			return i;
		}
	}

	/* Return -1 if value was not found in array */
	return -1;
}

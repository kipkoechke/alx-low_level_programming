#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min number
 * @max: max number
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *str, x;

	if (min > max)
	{
		return (NULL);
	}

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
	{
		*(str + x) = min;
	}
	return (str);
}

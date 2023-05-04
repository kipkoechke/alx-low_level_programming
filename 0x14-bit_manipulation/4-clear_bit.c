#include "main.h"
/**
 * clear_bit - function that clear the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number input.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	if ((index > 8 * sizeof(*n)))
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

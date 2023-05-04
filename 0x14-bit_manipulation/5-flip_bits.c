#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * You are not allowed to use the % or / operators
 * @n: base number
 * @m: number to transform to
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, com;

	com = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			com++;
	}
	return (com);
}

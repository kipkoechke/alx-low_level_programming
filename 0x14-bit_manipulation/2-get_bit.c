#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - function that returns the value of a bit at a given index.
  * @n: input long integer
  * @index: index to start at
  *
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
	{
		return (-1);
	}
	else
	{
		return ((int)(n >> index) & 1);
	}
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - prints buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size of the memory
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
/**
 * _calloc - function that allocates memory for array
 * @nmemb: adress of the memory
 * @size: size of the memory
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	_memset(str, 0, nmemb * size);

	return (str);
}

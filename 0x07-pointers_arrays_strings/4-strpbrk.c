#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: address of first occurence
 * @accept: byte address
 *
 * Return: Nothing
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}

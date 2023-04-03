#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: address of initial segment
 * @accept: address of bytes
 *
 * Return: Nothing
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!(accept[j]))
			break;
	}
	return (i);
}

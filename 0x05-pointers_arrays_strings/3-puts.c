#include "main.h"
/**
 * _puts - checks for a string
 * @str: validate the character
 *
 * Return: Always 0
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

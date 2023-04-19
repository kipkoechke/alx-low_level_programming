#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name of a person
 * @f: print name in UPPERCASE
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

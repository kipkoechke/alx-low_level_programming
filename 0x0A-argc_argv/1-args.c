#include "main.h"
#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: number of command line arguments
 * @argv: array containing coomand line arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count ++)
	{
		if (count + 1 == argc)
		{
			printf("%i\n", count);
		}
	}
	return (0);
}

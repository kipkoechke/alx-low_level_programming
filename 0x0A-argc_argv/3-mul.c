#include "main.h"
#include <stdlib.h>
#include <ctype.h>
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
	int multiply = 1;

	if (argc == 3)
	{
		multiply *= atoi(argv[argc - 2]);
		multiply *= atoi(argv[argc - 1]);
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

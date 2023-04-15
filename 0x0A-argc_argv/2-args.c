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

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
int (*get_op_func(char *s))(int, int);

/**
 * main - function of the program
 * @argc: arguments v
 * @argv: arguments v
 * Return: 0 if false
 */
int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int a, b, operator;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	operator = argv[2][0];
	switch (operator)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	case '%':
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get = get_op_func(argv[2]);
	printf("%d\n", get(a, b));
	return (0);}

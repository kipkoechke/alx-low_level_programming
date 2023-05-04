#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness.
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *test = (char *)&i;
	
	return ((int)test[0]);
}

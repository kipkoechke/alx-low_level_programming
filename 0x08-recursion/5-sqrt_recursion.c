#include "main.h"

/**
 * _sqrt - function that returns the natural square root of a number
 * @n: int1
 * @a: int2
 * Return: _sqrt
 *
 */
int _sqrt(int n, int a)
{
	if (n < 0)
		return (-1);
	if ((a * a) > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - the recursion
 * @n: int1
 *
 * Return: int
 *
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

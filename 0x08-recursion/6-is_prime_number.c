#include "main.h"
/**
 * prime_a - function returns 1 if the input is a prime number
 * @a: int1
 * @b: int2
 *
 * Return: Always 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
		else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - function for prime number
 * @n: integer
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}

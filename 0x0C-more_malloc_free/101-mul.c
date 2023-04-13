#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *s);
void print_error(void);

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int len1, len2, i, j, k, carry, n1, n2, sum;
	char *num1, *num2, *res;

	if (argc != 3)
	{
		print_error();
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	res = malloc(sizeof(char) * (len1 + len2));
	if (res == NULL)
		return (1);

	for (i = 0; i < len1 + len2; i++)
		res[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + res[k] - '0' + carry;
			carry = sum / 10;
			res[k] = (sum % 10) + '0';
		}

		if (carry > 0)
			res[k] += carry;
	}

	for (i = 0; res[i] == '0' && i < len1 + len2; i++)
		;

	if (i == len1 + len2)
		_putchar('0');
	else
	{
		for (; i < len1 + len2; i++)
			_putchar(res[i]);
	}
	_putchar('\n');

	free(res);
	return (0);
}

/**
 * _strlen - calculates the length of a string
 * @s: string to calculate length of
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}

/**
 * print_error - prints an error message
 */
void print_error(void)
{
	char *msg = "Error\n";

	while (*msg)
		_putchar(*msg++);
}


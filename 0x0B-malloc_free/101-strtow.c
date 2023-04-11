#include "main.h"
#include <stdlib.h>

int count_words(char *);
int word_len(char *);
char **strtow(char *);

/**
 * count_words - Counts the number of words in a string
 * @str: The string to be counted
 *
 * Return: The number of words in @str
 */
int count_words(char *str)
{
	int words = 0, i, len = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len++;
		}
		else if (len != 0)
		{
			words++;
			len = 0;
		}
	}

	if (len != 0)
		words++;

	return (words);
}

/**
 * word_len - Gets the length of a word
 * @str: The string to be measured
 *
 * Return: The length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: If str is NULL or contains no words - NULL
 * Otherwise - a pointer to an array of strings (words)
 * Each element of the array contains a single word, null-terminated
 * The last element of the array is NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, num_words = 0;

	if (str == NULL || *str == '\0')
	return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
	return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (*str == ' ')
		str++;

		len = word_len(str);

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = *(str++);
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}


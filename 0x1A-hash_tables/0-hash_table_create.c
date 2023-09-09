/*
 * File: 0-hash_table_create.c
 */

#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table's array.
 *
 * Return: On success, a pointer to the newly created hash table.
 *         On failure, returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int index;

    /* Allocate memory for the hash table structure */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    /* Initialize the size of the hash table's array */
    new_table->size = size;

    /* Allocate memory for the array of hash nodes */
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
        return (NULL);

    /* Initialize all elements of the array to NULL */
    for (index = 0; index < size; index++)
        new_table->array[index] = NULL;

    return (new_table);
}

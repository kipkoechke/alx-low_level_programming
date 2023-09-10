/*
 * File: 6-hash_table_delete.c
 */

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    /* Store a reference to the original hash table */
    hash_table_t *head = ht;
    /* Declare node pointers for traversal */
    hash_node_t *node, *tmp;
    /* Loop variable for iterating through the hash table */
    unsigned long int i;

    /* Iterate through the hash table buckets */
    for (i = 0; i < ht->size; i++)
    {
        /* Check if the bucket is not empty */
        if (ht->array[i] != NULL)
        {
            /* Get the first node in the current bucket */
            node = ht->array[i];
            /* Traverse the linked list in the bucket */
            while (node != NULL)
            {
                /* Store a reference to the next node */
                tmp = node->next;
                /* Free memory allocated for the key */
                free(node->key);
                /* Free memory allocated for the value */
                free(node->value);
                /* Free the current node */
                free(node);
                /* Move to the next node */
                node = tmp;
            }
        }
    }
    /* Free the memory allocated for the array of nodes */
    free(head->array);
    /* Free the memory allocated for the hash table structure */
    free(head);
}

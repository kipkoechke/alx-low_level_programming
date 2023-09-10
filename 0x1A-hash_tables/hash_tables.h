#ifndef MY_HASH_TABLES_H
#define MY_HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct my_hash_node_s - Node of a custom hash table
 * @key: The unique key as a string
 * @value: The corresponding value for the key
 * @next: A pointer to the next node in the linked list
 */
typedef struct my_hash_node_s
{
    char *key;
    char *value;
    struct my_hash_node_s *next;
} my_hash_node_t;

/**
 * struct my_hash_table_s - Custom hash table data structure
 * @size: The size of the array
 * @array: An array of size @size containing pointers to linked lists
 */
typedef struct my_hash_table_s
{
    unsigned long int size;
    my_hash_node_t **array;
} my_hash_table_t;

my_hash_table_t *my_hash_table_create(unsigned long int size);
unsigned long int my_hash_djb2(const unsigned char *str);
unsigned long int my_key_index(const unsigned char *key, unsigned long int size);
int my_hash_table_set(my_hash_table_t *ht, const char *key, const char *value);
char *my_hash_table_get(const my_hash_table_t *ht, const char *key);
void my_hash_table_print(const my_hash_table_t *ht);
void my_hash_table_delete(my_hash_table_t *ht);

/**
 * struct my_shash_node_s - Node of a custom sorted hash table
 * @key: The unique key as a string
 * @value: The corresponding value for the key
 * @next: A pointer to the next node in the linked list
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct my_shash_node_s
{
    char *key;
    char *value;
    struct my_shash_node_s *next;
    struct my_shash_node_s *sprev;
    struct my_shash_node_s *snext;
} my_shash_node_t;

/**
 * struct my_shash_table_s - Custom sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size containing pointers to linked lists
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct my_shash_table_s
{
    unsigned long int size;
    my_shash_node_t **array;
    my_shash_node_t *shead;
    my_shash_node_t *stail;
} my_shash_table_t;

my_shash_table_t *my_shash_table_create(unsigned long int size);
int my_shash_table_set(my_shash_table_t *ht, const char *key, const char *value);
char *my_shash_table_get(const my_shash_table_t *ht, const char *key);
void my_shash_table_print(const my_shash_table_t *ht);
void my_shash_table_print_rev(const my_shash_table_t *ht);
void my_shash_table_delete(my_shash_table_t *ht);

#endif /* MY_HASH_TABLES_H */

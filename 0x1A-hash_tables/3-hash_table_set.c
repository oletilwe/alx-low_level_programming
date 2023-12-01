#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define HASH_TABLE_SIZE 100

/**
* hash_table_set - a function that adds an element to the hash table
* @ht: the hash table to be added
* @key: the key
* @value: is associated with the key
* Return: Always 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, HASH_TABLE_SIZE);
	node *new_node = create_node(key, value);

	if (ht == NULL || *key == '\0')
	{
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

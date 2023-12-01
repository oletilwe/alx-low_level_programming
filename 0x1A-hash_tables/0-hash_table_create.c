#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
* hash_table_create - a function that creates a hash table
* @size: input value
* Return: always 0
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_table->array  == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		new_table->array[i] = NULL;
	}
	new_table->size = size;
	return (new_table);
}

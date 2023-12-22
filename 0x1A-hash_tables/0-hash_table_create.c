#include "hash_tables.h"

/**
 * hash_table_create - Create the hash table.
 * @size: Size of the table.
 *
 * Return: The hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	/*Create a hashTable Var*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	/*create a head node*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;

	return (table);
}




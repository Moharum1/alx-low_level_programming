#include "hash_tables.h"
/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currentNode;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while(ht->array[i] != NULL)
			{
				currentNode = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = currentNode;
			}
		}
	}
	free(ht->array);
	free(ht);	
}

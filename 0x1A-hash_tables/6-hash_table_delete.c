#include "hash_tables.h"
/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currentNode, *tempNode;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];

		while(currentNode != NULL)
		{
			tempNode = currentNode;
			currentNode = currentNode->next;
			free(currentNode->key);
			free(currentNode->value);
			free(tempNode);
		}
		free(currentNode);
	}
	free(ht->array);
	free(ht);	
}

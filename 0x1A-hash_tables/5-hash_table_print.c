#include "hash_tables.h"
/**
 * hash_table_print - Print whole the hash table.
 * @ht: Hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode;
	int flag;


	flag = 0;
	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];

		while (currentNode != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			flag = 1;
			currentNode = currentNode->next;
		}
	}
	printf("}\n");
}

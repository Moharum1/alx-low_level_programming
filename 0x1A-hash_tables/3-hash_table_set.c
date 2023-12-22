#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos;
	hash_node_t *currentNode, *newNode;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (ht->array[pos] == NULL)
	{
		ht->array[pos] = newNode;
		return (1);
	}
	else
	{
		currentNode = ht->array[pos];
		while (currentNode != NULL && strcmp(current->key, key) != 0)
		{
			currentNode = currentNode->next;
		}
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			free(newNode);
			currentNode->value = strdup(value);
		}
		else
		{
			currentNode->next = newNode;
		}
		return (1);
	}


}

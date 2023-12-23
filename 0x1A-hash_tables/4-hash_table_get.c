#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table.
 * @key: Key.
 *
 * Return: The value if works, NULL if doesn't.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *content;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	content = ht->array[pos];

	while (content != NULL && strcmp(content->key, key) != 0)
	{
		content = content->next;
	}

	if (content == NULL)
		return (NULL);
	else
		return (content->value);

}

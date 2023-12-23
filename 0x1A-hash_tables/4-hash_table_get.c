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
	int pos;
	hash_node_t *content;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	content = ht->array[pos];

	if (content == NULL)
		return (NULL);

	return (content->value);

}

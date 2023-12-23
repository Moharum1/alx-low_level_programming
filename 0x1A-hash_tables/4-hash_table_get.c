#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int pos;
	hash_node_t *content;

	pos = key_index((const unsigned char *)key, ht->size);
	content = ht->array[pos];

	if (content == NULL)
		return (NULL);

	return (content->value);

}

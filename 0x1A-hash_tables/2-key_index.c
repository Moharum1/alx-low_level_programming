#include "hash_tables.h"
/**
 * key_index - Hash function that get the index of a specic key.
 * @key: Key to aplied the transformation.
 * @size: size of the Hash table
 *
 * Return: the position of the key in the hash table.
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}

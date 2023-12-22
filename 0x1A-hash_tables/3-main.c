#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_hash_table(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *currentNode;

    if (ht == NULL || ht->array == NULL)
    {
        printf("Invalid hash table.\n");
        return;
    }

    printf("Hash Table Content:\n");

    for (i = 0; i < ht->size; i++)
    {
        printf("[%lu]: ", i);
        currentNode = ht->array[i];

        while (currentNode != NULL)
        {
            printf("(%s: %s) ", currentNode->key, currentNode->value);
            currentNode = currentNode->next;
        }

        printf("\n");
    }
}

int is_key_in_hash_table(hash_table_t *ht, const char *key)
{
    unsigned long int pos;
    hash_node_t *currentNode;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return 0;

    pos = key_index((const unsigned char *)key, ht->size);
    currentNode = ht->array[pos];

    while (currentNode != NULL)
    {
        if (strcmp(currentNode->key, key) == 0)
            return 1; 
        currentNode = currentNode->next;
    }

    return 0;
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "depravement", "true");
    hash_table_set(ht, "stylist", "cool");
    print_hash_table(ht);
    return (EXIT_SUCCESS);
}
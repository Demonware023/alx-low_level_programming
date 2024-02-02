#include "hash_tables.h"

/**
 * hash_table_set - Add or update a key/value pair in a hash table
 * @ht: The hash table
 * @key: The key string
 * @value: The value string associated with the key
 *
 * Return: 1 if the operation succeeds, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current_node;

    /* Check if the key or hash table is NULL */
    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    /* Calculate the index using the key_index function */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check for collision and handle it by adding a new node at the beginning */
    current_node = ht->array[index];
    while (current_node != NULL)
    {
        /* If key already exists, update the value and return 1 */
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value); /* Free existing value */
            current_node->value = strdup(value); /* Duplicate and update value */
            if (current_node->value == NULL)
                return (0); /* Return 0 if strdup fails */
            return (1); /* Return 1 for success */
        }
        current_node = current_node->next;
    }

    /* If key doesn't exist, create a new node and add it to the beginning of the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0); /* Return 0 if malloc fails */

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key); /* Free allocated key memory if strdup fails */
        free(new_node);      /* Free allocated node memory if strdup fails */
        return (0);          /* Return 0 if strdup fails */
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1); /* Return 1 for success */
}

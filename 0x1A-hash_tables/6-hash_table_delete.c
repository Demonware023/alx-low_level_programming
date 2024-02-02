#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current_node, *next_node;

    /* Check if the hash table is NULL */
    if (ht == NULL)
        return;

    /* Free the memory allocated for each node in the hash table */
    for (i = 0; i < ht->size; i++)
    {
        current_node = ht->array[i];
        while (current_node != NULL)
        {
            next_node = current_node->next;
            free(current_node->key);
            free(current_node->value);
            free(current_node);
            current_node = next_node;
        }
    }

    /* Free the memory allocated for the array of the hash table */
    free(ht->array);

    /* Free the memory allocated for the hash table structure itself */
    free(ht);
}

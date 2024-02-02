#include "hash_tables.h"

/**
  * key_index - Get the index of a key in a hash table array
  * @key: The key string
  * @size: The szie of the hash table array
  *
  * Return: The index which the key/value pai is stored in the area.
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Caculate the hash value using the djb2 algorithm/hash function*/
	hash_value = hash_djb2(key);

	/* Calcuate the index within the array using the module operation*/
	return (hash_value % size);
}

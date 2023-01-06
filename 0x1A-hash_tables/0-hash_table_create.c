#include "hash_tables.h"

/**
 * hasb_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	// Declare a pointer to a hash table and an iterator
	hash_table_t *ht;
	unsigned long int i;

	// Allocate memory for the hash table
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return ('\0');

	// Set the size of the hash table and allocate memory for the array
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return ('\0');
	// Initialize the array with NULL pointers
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	// Return the new hash table
	return (ht);
}

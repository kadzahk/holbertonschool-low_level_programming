#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - gets an element
 * @ht: pointer to hash table
 * @key: key
 * Return: string value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long int i = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];

	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}

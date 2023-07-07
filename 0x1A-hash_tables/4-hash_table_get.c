#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value to the with a key
 *
 * @ht: pointer to the hash
 * @key: key of the hash table
 * Return: value of the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

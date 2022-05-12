#include "lists.h"

/**
 * *insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to a pointer to the head of a list
 * @idx: the index of the list where the new node should be added.
 * @n: integer to be add to the list.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prim, *sec, *aux = *h;
	unsigned int i = 0;

	prim = malloc(sizeof(dlistint_t));
	if (!prim)
		return (NULL);
	prim->n = n;
	prim->next = NULL;
	prim->prev = NULL;
	if (*h == NULL)
	{
		*h = prim;
		return (prim);
	}
	if (idx == 0)
	{
		(*h)->prev = prim, prim->next = *h, *h = prim;
		return (prim);
	}
	while (aux != NULL)
	{
		if (i == idx)
		{
			sec = aux->prev;
			aux->prev = prim;
			prim->prev = sec;
			prim->next = aux;
			sec->next = prim;
			return (prim);
		}
		if (i + 1 == idx && aux->next == NULL)
		{
			aux->next = prim;
			prim->prev = aux;
			return (prim);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int len, i;
	char *pnt;

	len = _strlen(src);
	pnt = malloc((len + 1) * sizeof(char));
	if (pnt == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		pnt[i] = src[i];
	pnt[i] = '\0';
	return (pnt);
}
/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *trstring;

	if (str == NULL)
		return (NULL);
	trstring = _strdup(str);
	if (trstring == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = trstring;
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
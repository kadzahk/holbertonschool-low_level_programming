#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenate string
 **/
char *str_concat(char *s1, char *s2)
{
	char *strDup;
	int i, j;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strDup = malloc(sizeof(char) * (i + j + 1));
	if (strDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++, j++;
	}
	strDup[i] = '\0';
	return (strDup);
}

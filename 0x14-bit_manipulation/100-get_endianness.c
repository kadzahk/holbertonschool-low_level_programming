#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *t;

	i = 1;
	t = (char *)&i;
	return ((int)t[0]);
}

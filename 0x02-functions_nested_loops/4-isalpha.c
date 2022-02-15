#include "main.h"
/**
 * _isalpha - function
 *@al: variable of the function
 * Return: dependent of the function result
 */
int _isalpha(int al)
{
if (al >= 'a' && al <= 'z')
{
return (1);
}
else if (al >= 'A' && al <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

#include "main.h"
/**
 *_islower - function
 *@a: variable to run the function
 *Return: 0 if uppercase or 1 if lowecase
 */
int _islower(int a)
{
if (a == 'a' && a <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

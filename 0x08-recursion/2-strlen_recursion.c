#include "main.h"
#include <stddef.h>

/**
* _strlen_recursion - returns the length of a string
* @s: input value
* Return: always 0
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
_strlen_recursion(s + 1);
return (1);
}

#include "main.h"
#include <stddef.h>

/**
* _strcmp - a function that compares two strings
* @s1: input value
* @s2: input value
* Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}

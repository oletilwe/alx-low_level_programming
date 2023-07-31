#include "main.h"
#include <stddef.h>

/**
* _memset - fills memory with constant byte
* @s: output value
* @n: output value
* @b: input value
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n > 0)
{
*ptr = b;
ptr++;
n--;
}
return (s);
}

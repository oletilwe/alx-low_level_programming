#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocating memory using malloc
* @b: input value
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

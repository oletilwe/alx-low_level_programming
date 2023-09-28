#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - a function that sets a value
* @n: input value
* @index: is the index starting from zero
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}

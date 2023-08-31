#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - a function that sets a value of a bit to 1
* @n: input value
* @index: is the index
* Return: 1 if it worked -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}

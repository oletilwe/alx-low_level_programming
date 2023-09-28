#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_bit - return the value of a bit
* @n: input value
* @index: is the index, starting from 0
* Return: the value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
return ((n & mask) ? 1 : 0);
}

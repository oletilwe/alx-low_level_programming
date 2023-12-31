#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* clear_bit - value of a bit to 0
* @n: input value
* @index:  is the index, starting from 0
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

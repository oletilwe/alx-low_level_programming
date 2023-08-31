#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* clear_bit - sets the value of bit to zero
* @n: input value
* @index: is the index starting from 0
* Return: 1 if it worked -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}

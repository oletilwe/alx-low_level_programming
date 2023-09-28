#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* flip_bits - returns the number of bits you would need to flip to get
* @n: input value
* @m: input value
* Return: always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}

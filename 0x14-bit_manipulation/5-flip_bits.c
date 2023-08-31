#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* flip_bits - function that returns a bits
* @n: input value
* @m: input value
* Return: always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}

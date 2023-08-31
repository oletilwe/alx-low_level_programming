#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* binary_to_uint - write a function that converts a binary number
* @b: is pointing to a string
* Return: the convereted no.
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}

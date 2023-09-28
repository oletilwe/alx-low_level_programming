#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_binary - a binary representation of a number
* @n: input value
*/

void print_binary(unsigned long int n)
{
int shift = sizeof(unsigned long int) * 8 - 1;
int flag = 0;
while (shift >= 0)
{
unsigned long int bit = (n >> shift) & 1;
if (bit == 1)
flag = 1;
if (flag)
(bit == 1) ? write(1, "1", 1) : write(1, "0", 1);
shift--;
}
}

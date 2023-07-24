#include "main.h"
#include <stddef.h>

/**
* reset_to_98 - a function that takes a pointer to an int as parameter
* and updates the value it points up to 98
* @n: input
* Return: n
*/

void reset_to_98(int *n)
{
if (n != NULL)
{
*n = 98;
}
}

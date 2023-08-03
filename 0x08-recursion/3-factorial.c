#include "main.h"
#include <stddef.h>

/**
* factorial - returns a factorial of a given number.
* @n: input value
* Return: always 0
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

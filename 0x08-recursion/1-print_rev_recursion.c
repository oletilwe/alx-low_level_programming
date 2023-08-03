#include "main.h"
#include <stddef.h>

/**
* _print_rev_recursion - prints a string in reversse
* @s: input value
* return: always 0
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

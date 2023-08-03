#include "main.h"
#include <stddef.h>

/**
* _puts_recursion - a function that prints string
* @s: input value
* Return: always 0
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

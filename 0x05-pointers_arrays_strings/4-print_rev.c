#include "main.h"
#include <stddef.h>

/**
* print_rev - print a string in reverse followed by a new line
* @s: string
* Return: 0
*/

void print_rev(char *s)
{
if (*s == '\0')
{
write(1, "\n", 1);
return;
}
print_rev(s + 1);
write(1, s, 1);
}

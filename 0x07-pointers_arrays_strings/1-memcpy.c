#include "main.h"
#include <stddef.h>

/**
* _memcpy - copies memory area
* @n: output value
* @src: input value
* @dest: output value
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;
while (n > 0)
{
*dest_ptr = *src_ptr;
dest_ptr++;
src_ptr++;
n--;
}
return (dest);
}

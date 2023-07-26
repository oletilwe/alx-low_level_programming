#include "main.h"
#include <stddef.h>

/**
* _strncat - concatenate two strings
* using at mot n bytes from src
* @dest: input value
* @src: input value
* @n: input value
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0' && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}

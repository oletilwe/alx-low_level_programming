#include "main.h"
#include <stddef.h>

/**
* _strcat - a function that concatenates two strings
* @dest: input value
* @src: input value
* Return: void
*/

char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return (dest);
}

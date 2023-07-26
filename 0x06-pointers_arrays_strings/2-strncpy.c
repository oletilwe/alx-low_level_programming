#include "main.h"
#include <stddef.h>

/**
* _strncpy - function to copy a string
* @dest: input value
* @src: input value
* @n: input value
* Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;
int i;
for (i = 0; i < n && *src != '\0'; i++)
{
*dest_ptr++ = *src++;
}
for (; i < n; i++)
{
*dest_ptr++ = '\0';
}
return (dest);
}

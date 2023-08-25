#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
* print_list - a function that prints all the elements of a list
* Return: number of nodes
* format: see example
* @h: pointer to the list_t list to print
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}

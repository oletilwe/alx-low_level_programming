#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
* list_len - a function that returns the number of elements in a linked list
* @h: pointer to the list_t list to print
* Return: the number of nodes printed
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

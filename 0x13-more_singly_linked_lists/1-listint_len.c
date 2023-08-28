#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* listint_len - a function that returns the number of elements in a linked list
* @h: input value
* Return: always 0
*/

size_t listint_len(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}

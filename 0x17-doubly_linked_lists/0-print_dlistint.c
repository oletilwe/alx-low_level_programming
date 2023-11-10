#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: input value
* Return: always 0
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}

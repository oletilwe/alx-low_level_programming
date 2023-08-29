#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_listint - a function that frees a list
* @head: input value
*/

void free_listint(listint_t *head)
{
listint_t *current = head;
while (current != NULL)
{
listint_t *temp = current;
current = current->next;
free(temp);
}
}

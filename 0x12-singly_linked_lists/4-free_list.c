#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* free_list - a function that frees a list
* @head: double pointer to the list_t list
* Return always 0
*/

void free_list(list_t *head)
{
list_t *current = head;
while (current != NULL)
{
list_t *temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}

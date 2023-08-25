#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *add_node_end - a function that adds a new node at the end of a list
* @str: new string to aff in the node
* @head: double pointer to the lists_t list
* Return: the address of the new element, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}

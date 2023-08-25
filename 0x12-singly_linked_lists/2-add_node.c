#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *add_node - a function that writes a new node at the begining of a list
* @str: new string to add in the node
* @head: pointer to the list_t list to print
* Return: the address of the new element or if NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
{
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
}

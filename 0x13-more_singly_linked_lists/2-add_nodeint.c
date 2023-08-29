#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint - a function that add a new node at the begining og a list
* @head: input value
* @n: input value
* @int: input value
* Return: the address of the new element or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node-> = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

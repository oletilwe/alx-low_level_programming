#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_nodeint_at_index - a function that returns the ninth node of the list
* @head: first node of the linked list
* @index: index of the node returned
* Return: pointer to the node
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}

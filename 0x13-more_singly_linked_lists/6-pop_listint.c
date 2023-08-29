#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - a function that delets the head node of a linked list
* @head: input value
* Return: if a linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

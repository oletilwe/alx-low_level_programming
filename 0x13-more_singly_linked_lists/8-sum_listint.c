#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - sum of all linked list
* Return: resulting sum
* @head: first node in the linked list
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

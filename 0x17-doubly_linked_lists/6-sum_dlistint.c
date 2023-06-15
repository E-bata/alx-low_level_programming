#include "lists.h"

/**
 * sum_dlistint - This returns the sum of all node data
 * @head: head of each node
 * Return: sum of node data
 */
int sum_dlistint(dlistint_t *head)
{
size_t res = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
res += head->n;
head = head->next;
}
return (res);
}

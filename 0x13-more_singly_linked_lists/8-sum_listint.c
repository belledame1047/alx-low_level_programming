#include "lists.h"

/**
 * sum_listint - sum of all data (n) in a linked list
 * @head: pointer to the first node in the linked list
 * Return: sum of resulting data
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

#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 * Return: NULL if error
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

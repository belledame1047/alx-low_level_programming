#include "lists.h"
/**
 * add_nodeint - add  a new node at the beginning of a linked list.
 * @head: head of a double pointer.
 * @n: int to add in the new node
 * Return: the address of the new element, or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}


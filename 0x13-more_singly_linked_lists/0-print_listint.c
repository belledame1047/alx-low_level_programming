#include "lists.h"
/**
 * print_listint- print all the element of a linked list
 * @h: type of listint_t to print
 * Return: Num of Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)

	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

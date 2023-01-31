#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
stint_len.c 101 - print_listint_safe.c 2 - add_nodeint.c
5 - free_listint2.c 8 - sum_listint.c     lists.h
10 - delete_nodeint.c 102 - free_listint_safe.c
3 - add_nodeint_end.c 6 - pop_listint.c 9 - insert_nodeint.c}


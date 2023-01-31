#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
nnodes = 0;
deint.c  102 - free_listint_safe.c   3 - add_nodeint_end.c
6 - pop_listint.c    9 - insert_nodeint.c

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}


#include "sort.h"

/**
 * insertion_sort_list - sort linked lists
 * @list: head node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *nxt, *prv;

	if (!list || !*list)
		return;

	current = *list;
	while ((current = current->next))
	{
		nxt = current;
		while (nxt->prev && nxt->n < nxt->prev->n)
		{
			prv = nxt->prev;
			if (nxt->next)
				nxt->next->prev = prv;
			if (prv->prev)
				prv->prev->next = nxt;
			else
				*list = nxt;
			prv->next = nxt->next;
			nxt->prev = prv->prev;
			nxt->next = prv;
			prv->prev = nxt;

			print_list(*list);
		}
	}
}

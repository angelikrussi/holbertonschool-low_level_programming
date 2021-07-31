#include "lists.h"
/**
 *list_len - this function t returns the number of elements in a linked list_t.
 * @h:incoming data
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}

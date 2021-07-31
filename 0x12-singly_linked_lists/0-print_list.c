#include "lists.h"
/**
 * print_list - singly linked list
 * @h:incoming data
 *Return:  the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			counter++;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}

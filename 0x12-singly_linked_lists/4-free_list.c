#include "lists.h"
/**
 * free_list - this  función frees a list_t list..
 * @head:incoming data
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *test;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		test = (*head).next;
		free((*head).str);
		free(head);
		head = test;
	}
}

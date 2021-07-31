#include "lists.h"
/**
 * free_list - this  función frees a list_t list..
 * @head:incoming data
 * Return: Always 0.
 */
void free_list(list_t *head)
{

	list_t *present, *after;

	present = head;
	while (present != NULL)
	{
		after = present->after;
		free(present->str);
		free(present);
		present = after;
	}

}

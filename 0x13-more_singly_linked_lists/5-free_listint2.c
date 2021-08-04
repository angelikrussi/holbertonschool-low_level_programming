#include "lists.h"
/**
 * free_listint2 - this function frees a listint_t list.
 * @head:incoming data
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *unoccupied;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		unoccupied = *head;
		*head = (*(head))->next;
		free(unoccupied);
	}
	*head = NULL;
}

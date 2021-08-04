#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head:incoming data
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *provisional;
	int n;

	provisional = *head;
	if (provisional == NULL)
		return (0);
	*head = provisional->next;
	n = provisional->n;
	free(provisional);
	return (n);
}

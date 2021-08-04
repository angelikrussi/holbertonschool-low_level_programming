#include "lists.h"
/**
 *add_nodeint_end - this function adds a new node at the end.
 * @n: linked list pointer.
 * @head: pointer.
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporary;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temporary = *head;

	while (temporary->next != NULL)
		temporary = temporary->next;

	temporary->next = new;

	return (new);
}

#include "lists.h"
/**
 * add_node_end - function that adds a new node at the beginning.
 * @head:double pointer
 * @str:string to add to the new node.
 *Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, counter = 0;
	list_t *new;
	list_t *temporary;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	new->len = i;
	new->str = strdup(str);
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

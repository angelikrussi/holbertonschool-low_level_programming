#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning.
 * @head:double pointer
 * @str:string to add to the new node.
 *Return: address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temporary;

	temporary = malloc(sizeof(list_t));
	{
		if (temporary == NULL)
		return (NULL);
	}

	temporary->next = *head;
	temporary->str = strdup(str);
	temporary->len = strlen(str);

	*head = temporary;

	return (*head);

}

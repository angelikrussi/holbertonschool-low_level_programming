#include "lists.h"
/**
 * add_nodeint -this function adds a new node at the beginning of a listint_t list.
 * @h: linked list pointer.
 * @head: pointer.
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

    if (head == NULL)
	{
		return (NULL);
	}
    
    pointer = malloc(sizeof(listint_t));
	
    if (pointer == NULL)
    {
        return (NULL);
    }
    
    pointer->n = n;
    pointer->next = *head;
    *head = pointer;

	return (*head);
}

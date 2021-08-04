#include "lists.h"
/**
 * get_nodeint_at_index - this  function that returns the nth node
 * of a listint_t linked list.
 * @head:incoming data
 * @index: is the index of the node.
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned counter;

	for (counter = 0; counter < index && head->next; counter++)
	{
		head = head->next;
	}
	if (counter < index)
	{
		return (NULL);
	}
	return (head);
}

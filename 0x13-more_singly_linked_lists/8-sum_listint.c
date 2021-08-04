#include "lists.h"
/**
 * sum_listint - this function that returns the sum of all
 *  the data (n) of a listint_t linked list.
 * @head:incoming data.
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int counter;

	for (counter = 0; head != NULL;)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}

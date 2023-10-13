#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: Returns the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}

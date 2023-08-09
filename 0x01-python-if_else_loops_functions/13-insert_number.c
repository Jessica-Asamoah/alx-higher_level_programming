#include "lists.h"

/**
 * insert_node - Function that inserts a number into a sorted
 * linked list
 * @head: Pointer to the head of the linked list
 * @number: The number to insert
 * 
 * Return: 0(failure) 1(success)
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new-> = node->next;
	node->next = new;

	return (new);
}

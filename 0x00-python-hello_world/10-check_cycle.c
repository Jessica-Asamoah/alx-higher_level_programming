#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Function that checks if a singly linked list has
 * a cycle in it
 * @list: Singly linked list
 *
 * Return: -1(cycle) 0(no cycle)
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);
	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}

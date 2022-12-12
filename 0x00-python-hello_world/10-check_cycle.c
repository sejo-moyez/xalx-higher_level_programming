#include "lists.h"
/**
 *check_cycle - checks if a singly linked list has a cycle in it
 *@list: a pionter to the sinly linked list to check
 *
 *Return: 1 there is a cycle or 0 if there in no cycle
 *Description: check cycle for ALX project
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list, *slow = list;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}

#include "lists.h"
/**
  * find_listint_loop - finds the loop in a linked list.
  * @head: pointer to first element in list.
  *
  * Return: address of the node or NULL.
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *next_node;

	if (head == NULL)
		return (NULL);

	current = head;
	next_node = head;
	while (current && next_node && next_node->next)
	{
		current = current->next;
		next_node = next_node->next->next;
		if (current == next_node)
		{
			return (next_node);
		}
	}
	if (current != next_node)
	{
		return (NULL);
	}
	else
	{
		current = head;
		while (current != next_node)
		{
			current = current->next;
			next_node = next_node->next;
		}
		return (next_node);
	}
}

#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current)
	{
		current = current->next;
		++count;
	}
	return (count);
}

#include "lists.h"

/**
* list_len - Returns number of elements in linked list
* @h: Pointer to a list
*
* Return: Number of elements in linked list
*/
size_t list_len(const list_t *h)
{
	/* Variable to keep track of the number of elements */
	unsigned int count = 0;

    while (h)
    {
        /* Move to the next node */
        h = h->next;
		/* Increment the count */
		++count;
	}
	/* Return the total number of elements */
	return (count);
}

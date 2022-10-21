#include "lists.h"
/**
 * list_len - singly linked list
 * @h: elements on linked list
 *
 * Description: returns number of elements
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h)
		h = h->next, sum++;
	return (sum);
}

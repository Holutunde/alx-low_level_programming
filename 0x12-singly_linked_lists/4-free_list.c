#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer head
 *
 * Description: frees a linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *num = NULL;

	num = head;

	while (num)
	{
		free(num->str);
		free(num);
		num = num->next;
	}
	free(num);
}

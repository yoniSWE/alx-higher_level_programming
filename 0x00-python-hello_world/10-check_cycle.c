#include "lists.h"
/**
 * check_cycle - cycle tortoise and hare
 * @list: pointer to head
 * Return: 1 on success, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
	listint_t *head;
	listint_t *tail;

	if (list == NULL)
		return (0);
	head = list;
	tail = list;
	while (tail->next != NULL && tail->next->next != NULL)
	{
		head = head->next;
		head = tail->next->next;
		if (head == tail)
		{
			head = list;
			while (head != tail)
			{
				head = head->next;
				tail = tail->next;
			}
			return (1);
		}
	}
	return (0);
}

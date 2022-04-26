#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
		size_t num = 0;

		while (head && (head > head->next))
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			++num;
		}
			if (head)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				++num;
			}
			return (num);
}

#include "monty.h"

/**
 * print_stack - prints the stack
 * @head: pointer to the stack head
 * @counter: number of elements in the stack
 * Return: void
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}


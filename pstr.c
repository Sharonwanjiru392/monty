#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Pointer to the stack head
 * @counter: Current line number
 *
 * Description: This function retrieves a string from the stack and prints it
 *              character by character until reaching a null byte ('\0').
 *
 * Return: No return value
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

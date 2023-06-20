#include "monty.h"

/**
 * f_pop - Prints the top element
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the top element of the stack.
 *              It takes the head of the stack and the line number
 *              as parameters.
 *
 * Return: No return value
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

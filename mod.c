#include "monty.h"

/**
 * f_mod - Computes the modulus of the second top element of the stack
 *         by the top element of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number
 *
 * Description: This function calculates the modulus of the second top
 *              element of the stack by the top element of the stack.
 *              It takes the values from the stack and performs the
 *              modulus operation on them.
 * Return: No return value
 */

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

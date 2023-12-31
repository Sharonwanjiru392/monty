#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: This function rotates the stack by moving the top element to
 *              the bottom of the stack.
 * Return: No return value
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}

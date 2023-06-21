#include "monty.h"

/**
 * f_queue - prints the top element of the queue
 * @head: pointer to the head of the queue
 * @counter: line number
 *
 *
 * Return: void
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds a new node to the tail of the stack
 * @n: new_value - the value to be added to the stack
 * @head: head of the stack
 *
 * Description:
 * This function adds a new node with the given value to the tail of the stack.
 *
 * Return: No return value.
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

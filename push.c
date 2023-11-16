#include "monty.h"
/**
 * push - push
 * @n: n
 * Return: 1 or null
 */
void push(int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}

	new->n = n;
	if (size == 0)
	{
		top = new;
		size++;
		return;
	}
	new->prev = top;
	top->next = new;
	top = new;
	size++;
	return;
}

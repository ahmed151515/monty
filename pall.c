#include "monty.h"
/**
 * pall - pall
 * Return: 1 or null
 */
void pall(void)
{
	stack_t *c = top;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->prev;
	}
}

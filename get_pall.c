#include "monty.h"

/**
 * get_pall - prints out all elements in the stack
 *
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Return: EXIT_FAILURE if it fails
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void)line_number;

	node = *stack;

	while (node != NULL)
	{
		printf("%d", node->n);
		node = node->next;
		printf("\n");
	}
}

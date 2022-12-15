#include "monty.h"

/**
 * get_pop - pops/remove the top element of the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 *
 * Return: EXIT_FAILURE on failure
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *first;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	*stack = (*stack)->next;
	if (first->next)
	{
		first->next->prev = NULL;
	}
	free(first);
}

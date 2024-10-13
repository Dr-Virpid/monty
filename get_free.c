#include "monty.h"

/**
 *  get_free - Clear/Free whole stack
 *
 *  @stack: Stack pointer
 *
 *  Return: Void
 */


void get_free(stack_t *stack)
{
	if (stack)
	{
		get_free(stack->next);
		free(stack);
	}
}

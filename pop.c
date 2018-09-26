#include "monty.h"

/**
* pop - pops the very top. so LIFO
* @stack: jenga biatch
* @lineCount: line number for error messages
*
* Return: another void bruh
*/
void pop(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		/* again, cant add to helper functions cause reached 5 limit */
		freeAll(stack);
		printf("L%u: can't pop an empty stack\n", lineCount);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next; /* basic pop algorithm */
	free(*stack);
	*stack = temp;
	if (!*stack)
		return; /* prevents errors cause next line might assign a NULL */
	(*stack)->prev = NULL;
}

#include "monty.h"

/**
* _div - subtracts the first 2 elements
* @stack: i cant come up with any more stack puns. stack of wack
* @lineCount: line # for the errors
*
* Return: guess waht the data type of this func returns?
*/
void _div(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int div = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* i should prob make a print error helper file 2.0 by now */
		freeAll(stack);
		fprintf(stderr, "L%d: can't div, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		freeAll(stack);
		fprintf(stderr, "L%d: division by zero\n", lineCount);
		exit(EXIT_FAILURE);
	}
	/* so we combine the first 2 n values into sum */
	temp = *stack;
	div = temp->next->n / temp->n;

	pop(stack, lineCount);
	(*stack)->n = div; /* we reassign after the pop off */
}

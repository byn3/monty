#include "monty.h"

/**
* _mul - combines the first 2 elements
* @stack: i cant come up with any more stack puns. stack of wack
* @lineCount: line # for the errors
*
* Return: guess waht the data type of this func returns?
*/
void _mul(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int product = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* i should prob make a print error helper file 2.0 by now */
		freeAll(stack);
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	/* so we combine the first 2 n values into sum */
	temp = *stack;
	product = temp->n * temp->next->n;

	pop(stack, lineCount);
	(*stack)->n = product; /* we reassign after the pop off */
}

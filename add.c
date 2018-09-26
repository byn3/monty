#include "monty.h"

/**
* add - combines the first 2 elements
* @stack: i cant come up with any more stack puns. stack of wack
* @lineCount: line # for the errors
*
* Return: guess waht the data type of this func returns?
*/
void add(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int sum = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* i should prob make a print error helper file 2.0 by now */
		freeAll(stack);
		printf("L%d: can't add, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	/* so we combine the first 2 n values into sum */
	temp = *stack;
	sum = temp->n + temp->next->n;

	pop(stack, lineCount);
	(*stack)->n = sum; /* we reassign after the pop off */
}

#include "monty.h"

/**
* swap - swaps the top 2 elemebnts in teh stack
* @stack: input stack address
* @lineCount: current line number
*/
void swap(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int tempN = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* yea def should have made another print error file */
		freeAll(stack);
		printf("L%d: can't swap, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	tempN = temp->n;
	temp->n = tempN;

	temp->n = temp->next->n;
	temp->next->n = tempN;
}

#include "monty.h"

/**
* pint - peek basically
* @stack: thiccc
* @lineCount: line number for errors
*
* Return: none. hahah another voidddD
*/
void pint(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack)
	{
		/* this is not in the oprint error helper funcs file */
		/* cause betty wont allow more than 5 functions =( */
		printf("L%d: can't pint, stack empty\n", lineCount);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

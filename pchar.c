#include "monty.h"

/**
* pchar - prints the top int in the stack, converting to ascii
* @stack: the data structure we are prob using
* @lineCount: used for error messages
*
* Return: None it is bleh
*/
void pchar(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack) /* if stack is empty */
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineCount);
		exit(EXIT_FAILURE);
	}
	if (isascii((*stack)->n) == 0) /* if the stack number is not an ascii */
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineCount);
		freeAll(stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}

#include "monty.h"

/**
* stackIt - function that stacks new data on the stack
* @stack: the pancake we currently have
* @temp: the new pancake we want to add on the stack
*
* Return: none it is void
*/


void stackIt(stack_t **stack, stack_t *temp)
{
	temp->n = atoi(world.argument); /* store the argument in n */
	if (!*stack) /* no stack exist. add temp as only element */
	{
		temp->prev = NULL;
		temp->next = NULL;
		*stack = temp;
	}
	else
	{ /* add temp to the top! */
		(*stack)->prev = temp;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}

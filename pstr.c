#include "monty.h"

/**
* pstr - prints the whole stack as ascii values
* @stack: i like turtles
* @lineCount: for error message handling
*
* Return: none it is voiderino
*/
void pstr(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;

	(void) lineCount; /* unused cause no errors. if error just breal */
	temp = *stack;
	while (temp)
	{
		if (temp->n > 0 && isascii(temp->n))
			printf("%c", temp->n); /* if conditions are aite, print the char */
		else
			break; /* break dat sheeet if its out of ascii range or 0 */
		temp = temp->next; /* next node brudda */
	}
	printf("\n");
}

#include "monty.h"

/**
* pall - prints out all the pancakes
* @stack: the stack of money im finna get
* @lineCount: Used never cause it was voided
*
* Return - None it is void. lol everything gonna be void!
*/

void pall(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;
	(void) lineCount; /* Need this cause errors */

	temp = *stack; /* used a temp so stack isnt modified */
	while (temp) /* loop through until NULL, printing everything */
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

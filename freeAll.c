#include "monty.h"

/**
* freeAll - frees everything
* @h: the head node given and passed ot this helper function
*
* Return: nothing it is void
*/

void freeAll(stack_t **h)
{
	stack_t *temp;

	if (!h) /* head is empty. nothing to free */
		return;
	free(world.gString); /* free the string in the global struct var */
	fclose(world.file); /* close the file in global struct variable */
	while (*h) /* free so much head. soooo goood */
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
}

#include "monty.h"

/**
* usageError - handles wrong amount of arguments, prints and exits
*
* Return - nothing. it is void
*/
void usageError(void)
{
	printf("USAGE: monty file");
	exit(EXIT_FAILURE);
}


/**
* fileReadError - was not possible to open or read file
* @argv: the string argument passed
*
* Return - none it is void
*/
void fileReadError(char *argv)
{
	printf("Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}


/**
* badOpCode - the opcode is invalid. exit with emergency!
* @stack: the thing we gotta free cause error was met
* @string: the string of the opcode that was invalid
* @lineCount: the line number
*
* Return - nonezo
*/
void badOpCode(stack_t **stack, char *string, unsigned int lineCount)
{
	printf("L%u: unknown instruction %s", lineCount, string);
	freeAll(stack); /* need to free later cause string above */
	exit(EXIT_FAILURE);
}


/**
* mallocError - handles wrong amount of arguments, prints and exits
* @stack: the pancakes we gotta deal with
*
* Return - nothing. it is void
*/
void mallocError(stack_t **stack)
{
	freeAll(stack);
	printf("Error: malloc failed");
	exit(EXIT_FAILURE);
}


/**
* integerError - no integer was pushed. throw error
* @stack: the stack
* @lineCount: used for debugging
*
* Rturn: none it is void
*/

void integerError(stack_t **stack, int lineCount)
{
	freeAll(stack);
	printf("L%u: usage: push integer\n", lineCount);
	exit(EXIT_FAILURE);
}

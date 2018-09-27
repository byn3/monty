#include "monty.h"

/**
* opcode - checks if the given string is an op code
* @stack: the pancake that is passed around the table
* @string: the argument or string or opcode
* @lineCount: used for error message returns
*
* Return: none it is void!!
*/


void opcode(stack_t **stack, char *string, unsigned int lineCount)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{NULL, NULL}
	}; /* the opcodes we want to compare via string */

	if (!strcmp(string, "stack"))
	{
		world.dataType = 1;
		return;
	}
	if (!strcmp(string, "queue"))
	{
		world.dataType = 0;
		return;
	}
	if (*string == '#')
		return;
	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, string) == 0)
		{
			op[i].f(stack, lineCount);
			return; /* if we found a match, run the function */
		}
		i++;
	}
	/* nothing matched. BAD OP CODE! ERROR ERROR EXIT */
	badOpCode(stack, string, lineCount);
}

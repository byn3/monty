#include "monty.h"
#include <stdio.h> /* for getline */
/**
* main - does a lot of stuff. calls on my helper functions to print output.
* @argc: number of arguments
* @argv: each argument as a string
*
* Description: This is used to practice stacks and queues
* Return: success or error codes
*/
int main(int argc, char **argv)
{
/*	pitbull world; */ /* the global variable MISTA WORLD WIDE */
	unsigned int lineCount = 1; /* line count. starts at 1 */
	size_t bufLen = 0; /* buffer count, starts at 0 */
	char *string = NULL; /* string placeholder. used for arguments */
	char *buffer = NULL; /* each line from the file will be stored here */
	stack_t *stack = NULL; /* the stack data structure */
	FILE *file; /* the file we will read */

	if (argc != 2)
		usageError(); /* call helper func */
	file = fopen(argv[1], "r"); /* open file and read */
	if (!file)
		fileReadError(argv[1]); /* call helper func */
	/* ### world.file = file;*/ /* store the file in a global file type */
	world.dataType = 1; /* we dealing with stacks if 1, queues if 0 */
	while (getline(&buffer, &bufLen, file) != -1)
	{
		/* ### world.gString = buffer; */ /* store the buffer in a global string */
		if (*buffer == '\n') /* go get next line and increase count */
		{
			lineCount++;
			continue;
		}
		string = strtok(buffer, " \t\n"); /* tokenize the string */
		if (!string)
		{
			lineCount++;
			continue;
		}
		world.argument = strtok(NULL, " \t\n"); /* store next string token */
		opcode(&stack, string, lineCount); /* run the function */
		lineCount++;
	}
	/* everything was successfull and we exit nicely */
	if (stack)
		freeAll(&stack);
	free(buffer);
	fclose(file);
	exit(EXIT_SUCCESS);
}

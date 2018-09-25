#include "monty.h"

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
	unsigned int lineCount = 1; /* line count. starts at 1 */
	size_t bufLen = 0; /* buffer count, starts at 0 */
	char *string; /* string placeholder. used for arguments */
	char *buffer; /* each line from the file will be stored here */
	FILE *file; /* the file we will read */
	stack_t stack /* the stack data structure */

	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], 'r');
	if (!file)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
while get line
str tok tonenize
count plus
f close
free buf
free string token

/*
	if file has invalid instruction then error
		unknown instruction.
			line numbers
			error codes.
*/

/*
	while file
		then execute every line until problem or end.

*/


	exit(EXIT_SUCCESS)
}

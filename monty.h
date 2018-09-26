#ifndef Dreamforce
#define Dreamforce

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
* struct global - the string, the arguments, the dataType, the file
* @string: the string from the buffer
* @argument: the arguments of the string
* @dataType: will be used to differentiate stacks from queues
* @file: the file we opened
*
* Description: global structure used to pass data around the functions easily
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct global
{
	char *gString;
	char *argument;
	int dataType;
	FILE *file;
} pitbull;

extern pitbull world;
pitbull world;

void add(stack_t **stack, unsigned int lineCount);
void freeAll(stack_t **h);
int isDigglet(char *string);
void lineUp(stack_t **stack, stack_t *temp);
void nop(stack_t **stack, unsigned int lineCount);
void opcode(stack_t **stack, char *string, unsigned int lineCount);
void pall(stack_t **stack, unsigned int lineCount);
void pint(stack_t **stack, unsigned int lineCount);
void pop(stack_t **stack, unsigned int lineCount);
void usageError(void);
void fileReadError(char *argv);
void badOpCode(stack_t **stack, char *string, unsigned int lineCount);
void mallocError(stack_t **stack);
void integerError(stack_t **stack, int lineCount);
void push(stack_t **stack, unsigned int lineCount);
void stackIt(stack_t **stack, stack_t *temp);
void swap(stack_t **stack, unsigned int lineCount);


#endif

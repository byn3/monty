#include "monty.h"

/**
* isDigglet - function that checks if digit. but i play pokemon
* @string: the string we want to check if it is a digit
*
* Return: if it returns a 0, it is NOT a digit, else return 1 cause it a digit
*/

int isDigglet(char *string)
{
	if (!string || *string == '\0')
		return (0); /* null and null term will be considered not not digits */
	if (*string == '-')
		string++; /* encountered a negative, move pointer over 1 */
	while (*string) /* loop through the string */
	{
		if (isdigit(*string) == 0)
			return (0); /* if the built-in returns a 0, we have a non number */
		string++;
	}
	return (1); /* sucessfully looped through string. everything is a digit */
}

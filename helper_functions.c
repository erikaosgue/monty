#include "monty.h"
/**
 * isNumber - check if the arg of push is a number
 * @ptr: points to the argument of push (a char number)
 * Return: A number != 0 if its number, 0 otherwise
 */

int isNumber(char *ptr)
{
	if (ptr[0] == '-')
		ptr++;

	while (*ptr != 0)
	{
		if (!isdigit(*ptr))
			return (0);
		ptr++;
	}
	return (3);
}

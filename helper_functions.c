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

/**
 * check_spaces - check if the line has spaces
 * @line: Buffer of getline
 * Return: 1 if find just spaces, 0 otherwise
*/

int check_spaces(char *line)
{
	int flag = 0;
	int i = 0;

	while (line[i] == ' ')
	{
		flag = 1;
		i++;
	}
	if (line[0] == '\0')
		return (1);

	if (line[i] == '\0' && flag == 1)
		return (1);
	return (0);
}

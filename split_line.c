#include "monty.h"

/**
 * split_line - split the line from getline into tokens
 * @line: The buffer that contains the line of the file
 * @numlinea: An int that count each line
 * Return: The monty functions on succes, NULL on failure
 */
char **split_line(char *line, unsigned int numlinea)
{
	char **tokens = NULL;
	int number = 0;

	tokens = malloc(sizeof(char *) * 2);
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit_and_Svalue[0] = 1;
		return (NULL);
	}
	tokens[0] = strtok(line, " \t");
	if (tokens[0] != NULL)
	{
		if (strcmp("push", tokens[0]) == 0)
		{
			tokens[1] = strtok(NULL, " \t");
			number = isNumber(tokens[1]);
			if (!number || tokens[1] == NULL)
			{
				fprintf(stderr, "L%u: usage: push integer\n", numlinea);
				exit_and_Svalue[0] = 1;
				free(tokens);
				return (NULL);
			}
			number = atoi(tokens[1]);
			exit_and_Svalue[1] = number;
		}
		return (tokens);
	}
	free(tokens);
	exit_and_Svalue[0] = 1;
	return (NULL);
}

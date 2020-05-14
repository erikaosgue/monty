#include "monty.h"
int exit_and_Svalue[3];

/**
 * main - principal funcion of the interpreter
 * @argc: An int that count the args
 * @argv: Matrix with the args
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	FILE *fd;
	char *line = NULL, **tokens, *filename = NULL;
	size_t length = 0;
	unsigned int numlinea = 0;
	int success = 0, len = 0, value = 0;
	stack_t *head = NULL;

	if (argc != 2)
	{ fprintf(stderr, "%s\n", "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == NULL)
	{ fprintf(stderr, "%s %s\n", "Error: Can't open file", filename);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &length, fd)) != -1)
	{
		numlinea++, len = strlen(line);
		line[len - 1] = '\0';
		value = check_spaces(line);
		if (value != 1)
		{
			tokens = split_line(line, numlinea);
			if (tokens == NULL)
				break;
			success = find_function(tokens, numlinea, &head);
			if (success == 1)
			{ free(tokens);
				break;
			} free(tokens);
		}
	}
	free_dlistint(head), free(line), fclose(fd);
	if (exit_and_Svalue[0])
		exit(EXIT_FAILURE);
	return (0);
}

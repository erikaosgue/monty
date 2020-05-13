#include "monty.h"

/**
 * main - principal funcion of the interpreter
 * @argc: An int that count the args
 * @argv: Matrix with the args
 * Returns: 0 on succes
 **/

int main(int argc, char *argv[])
{
        FILE *fd;
	char *line = NULL, **tokens, *filename = NULL;
	size_t length = 0;
        unsigned int numlinea = 0;
        int success = 0;

        if (argc != 2)
        {
                fprintf(stderr, "%s\n", "USAGE: monty file");
                exit(EXIT_FAILURE);
        }
        filename = argv[1];
        if (filename == NULL)
		return (0);

        fd = fopen(filename, "r");
        if (fd == NULL)
        {
                fprintf(stderr, "%s %s\n", "Error: Can't open file", filename);
                exit(EXIT_FAILURE);
        }
        while ((getline(&line, &length, fd)) != -1) 
        {
                numlinea++;
                tokens = split_line(line, numlinea);
                if (tokens == NULL)
                        break;
                success = find_function(tokens, numlinea);
                if (success == 1)
                { 
                        free(tokens);
                        break;
                } 
                free(tokens);
        }
        if (line)
                free(line);
        fclose(fd);
        return (0);
}

#include "monty.h"

/**
 * split_line - split the line from getline into tokens
 * @line: The buffer that contains the line of the file
 * @numlinea: An int that count each line
 * Returns: The monty functions on succes, NULL on failure
 * 
 */
char **split_line(char *line, unsigned int numlinea)
{
        char **tokens = NULL;
        int numero = 0;

        tokens = malloc(sizeof(char *) * 2);
        if (tokens == NULL)
		return (NULL);

        tokens[0] = strtok(line, " \t\n");
        if (tokens[0] != NULL)
        {
                if (strcmp("push", tokens[0]) == 0)
                {
                        tokens[1] = strtok(NULL, " \t\n");
                        printf("num = %s\n", tokens[1]);
                        /* falta solucionar si es un numero con atoi no funciona*/
                        numero = atoi(tokens[1]);
                        if (!numero || tokens[1] == NULL)
                        {
                                fprintf(stderr, "L%d: usage: push integer\n", numlinea);
                                free(tokens);
                                return (NULL);
                        }
                }
                return (tokens);
        }
        free(tokens);
        return (NULL);
}

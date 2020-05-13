#include "monty.h"


/**
 * find - function Finds the monty function
 * @tokens: Contains the function and its args
 * @numlinea: An int that count each line
 * Returns: 0 on succes, 1 on failure
 */
int find_function(char **tokens, unsigned int numlinea, stack_t **stack)
{
        int i = 0;

        instruction_t functions[] = {
                {"push", func_push},
                {"pall", func_pall},
                {"pint", func_pint},
                {"pop", func_pop},
                {"swap", func_swap},
                {"nop", func_nop},
                {NULL, NULL}};
        
        while(functions[i].opcode != NULL)
        {
                if (strcmp(functions[i].opcode, tokens[0]) == 0)
                {
                        functions[i].f(stack, numlinea);
                        return (exit_value);
                }
                i++;
        }
        fprintf(stderr, "L%d: unknown instruction %s\n", numlinea, tokens[0]);
        exit_value = 1;
        return (exit_value);
}

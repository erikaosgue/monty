#include "monty.h"

/**
 * find_function - function Finds the monty function
 * @tokens: Contains the function and its args
 * @numlinea: An int that count each line
 * @stack: Points to the head of the list
 * Return: 0 on succes, 1 on failure
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
		{"add", func_add},
		{"sub", func_sub},
		{"div", func_div},
		{"mul", func_mul},
		{"mod", func_mod},
		{"pchar", func_pchar},
		{"pstr", func_pstr},
		{"rotl", func_rotl},
		{"rotr", func_rotr},
		{"stack", func_stack},
		{"queue", func_queue},
		{NULL, NULL}};

	while (functions[i].opcode != NULL)
	{
		if (*tokens[0] == '#')
			return (exit_and_Svalue[0] = 0);
		if (strcmp(functions[i].opcode, tokens[0]) == 0)
		{
			functions[i].f(stack, numlinea);
			return (exit_and_Svalue[0]);
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", numlinea, tokens[0]);
	return (exit_and_Svalue[0] = 1);
}

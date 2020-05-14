#include "monty.h"
/**
 * func_comments - Ignores the line when get the # sign as firt character
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_comments(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
	exit_and_Svalue[0] = 0;
}
void func_stack(stack_t **stack, unsigned int line_number)
{
	exit_and_Svalue[2] = 0;
	(void)stack;
	(void)line_number;

}
void func_queue(stack_t **stack, unsigned int line_number)
{
	exit_and_Svalue[2] = 1;
	(void)stack;
	(void)line_number;
}


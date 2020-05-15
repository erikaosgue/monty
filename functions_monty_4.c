#include "monty.h"

/**
 * func_stack - sets the format of the data to a stack (LIFO)
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_stack(stack_t **stack, unsigned int line_number)
{
	exit_and_Svalue[2] = 0;
	(void)stack;
	(void)line_number;

}

/**
 * func_queue - sets the format of the data to a queue (FIFO)
 * @stack: Pointer to the head of the list
 * @line_number: An int that count each line
 */
void func_queue(stack_t **stack, unsigned int line_number)
{
	exit_and_Svalue[2] = 1;
	(void)stack;
	(void)line_number;
}

#ifndef MONTY_H
#define MONTY_H
/* Para eliminar */

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int exit_value;
int stack_value;


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


char **split_line(char *line, unsigned int numlinea);
int find_function(char **tokens, unsigned int numlinea, stack_t **head);

void func_pop(stack_t **head, unsigned int numlinea);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
size_t dlistint_len(const stack_t *h);

void func_push(stack_t **head, unsigned int n);
stack_t *add_dnodeint(stack_t **head, const int n);
stack_t	*sum_dlistint(stack_t **head);

void func_pall(stack_t **stack, unsigned int line_number);
void func_pint(stack_t **stack, unsigned int line_number);
void func_swap(stack_t **stack, unsigned int line_number);
void func_nop(stack_t **stack, unsigned int line_number);
void func_add(stack_t **head, unsigned int numlinea);

void free_dlistint(stack_t *head);
size_t print_dlistint(const stack_t *h);


#endif // MONTY_H

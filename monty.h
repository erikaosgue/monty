#ifndef MONTY_H
#define MONTY_H

/* LIBRARIES */
#include <stdio.h> /* getline */
#include <stdlib.h> /* exit */
#include <string.h>
#include <ctype.h>

extern int num_of_node;

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

/** para subir a github*/

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


<<<<<<< HEAD
=======
char **split_line(char *line, unsigned int numlinea);
int find_function(char **tokens, unsigned int numlinea);
void func_push(stack_t **head, unsigned int numlinea);

>>>>>>> 2f017128046314d169517a1063eaef04edd95005


#endif // MONTY_H

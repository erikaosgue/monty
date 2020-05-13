#include "monty.h"

/**
 * func_pop - split the line from getline into tokens
 * @head: Pointer to the head of the list
 * @numlinea: An int that count each line
 * 
 */
void func_pop(stack_t **head, unsigned int numlinea)
{
        if (*head != NULL)
        {
                delete_dnodeint_at_index(head, 0);
                exit_value = 0;
        }
        else
        {
                fprintf(stderr, "L%u: can't pop an empty stack\n", numlinea);
                exit_value = 1;
        }
        (void)head;
}

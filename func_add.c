#include "monty.h"
/* Para eliminar */


/**
 * func_pop - split the line from getline into tokens
 * @head: Pointer to the head of the list
 * @numlinea: An int that count each line
 * 
 */
void func_add(stack_t **head, unsigned int numlinea)
{
        if (*head != NULL)
        {
                sum_dlistint(head);
                printf("Succesfully sum the tops value = [%d] pop \n", stack_value);
                exit_value = 0;
        }
        else
        {
                fprintf(stderr, "L%u: can't pop an empty stack\n", numlinea);
                exit_value = 1;
        }
        (void)head;
}

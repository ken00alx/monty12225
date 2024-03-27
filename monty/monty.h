#include "monty.h"

/**
 * mul_top - multiplies the second element of the stack
 * with the top element of the stack and removes the top
 * element to leave the result in a new top
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void mul_top(stack_t **stack, unsigned int line_number)
{
        stack_t *mul = *stack;
        size_t len = stack_len(*stack);

        if (len < 2)
        {
                dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
        mul = mul->next;
        mul->n *= (*stack)->n;
        pop_stack(stack, line_number);

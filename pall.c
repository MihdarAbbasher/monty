#include "monty.h"

/**
 * pall - print stack elements
 * @head: head of stack
 * Return: void
 */

void print_all(stack_t *head)
{
	stack_t *curr;

	printf("print all\n");
	curr = head;
	while(curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}

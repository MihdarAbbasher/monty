#include "monty.h"

/**
 * handle_line - execute monty command
 * @line: str cmd
 * @i: line no
 * Return: void
 */

void handle_line(char *line, unsigned int i, stack_t *stack)
{
	char *cmd, *arg;
	int cmd_no;

	cmd = strtok(line, " \t\n");
	printf("%u: %s\n", i, cmd);
	cmd_no = get_cmd_no(cmd);
	switch(cmd_no)
	{
		case(0):
			arg = strtok(NULL, " \t\n");
			if (!arg)
				printf("no arg\n"),
				exit(EXIT_FAILURE);
			push_int(stack, arg);
		case(1):
			print_all(stack_t);
		default:
			printf("default");
	}

}

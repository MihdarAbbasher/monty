#include "monty.h"

/**
 * handle_line - execute monty command
 * @line: str cmd
 * @i: line no
 * Return: void
 */

void handle_line(char *line, unsigned int i)
{
	char *cmd;

	cmd = strtok(line, " \t\n");
	printf("%u: %s\n", i, cmd);

}

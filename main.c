#include "monty.h"

/**
 * main - main fun
 * @av: arr of args
 * @ac: args count
 * Retrun: 0
 */

int main(int ac, char **av)
{
	char *line;
	FILE *file;
	int size;
	unsigned int i;
	stack_t *stack;

	if (ac != 2)
	{
		print_err("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (!file)
	{
		print_err("Error: Can't open file ");
		print_err(av[1]);
		print_err("\n");
		exit(EXIT_FAILURE);
	}
	size = 1024;
	line = NULL;
	i = 0;
	stack = NULL;
	while(1)
	{
		line = malloc(size * sizeof(char));
		fgets(line, size, file);
		if (strlen(line) == 0)
		{
			printf("\n\n!line\n");
			break;
		}
		i++;
		handle_line(line, i, stack);
		free(line);
	}



	/* not monty instructions: L<line_number>: unknown instruction <opcode> */


	/* if malloc failed: Error: malloc failed */


	return (0);
}


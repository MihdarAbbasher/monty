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
	while(size > 1)
	{
		line = malloc(size * sizeof(char));
		fgets(line, size, file);
		if (strlen(line) == 0)
		{
			printf("!line");
			break;
		}
		i++;
		handle_line(line, i);
		free(line);
	}



	/* not monty instructions: L<line_number>: unknown instruction <opcode> */


	/* if malloc failed: Error: malloc failed */


	return (0);
}


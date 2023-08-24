#include "monty.h"

/**
 * main - main fun
 * @av: arr of args
 * @ac: args count
 * Retrun: 0
 */

int main(int ac, char **av)
{
	int fd, len;
	char *filename, *str;

	if (ac != 2)
	{
		print_err("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = av[1];
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		print_err("Error: Can't open file ");
		print_err(filename);
		print_err("\n");
		exit(EXIT_FAILURE);
	}
	str = read_textfile(filename, 1024);
	len = 0;
	while(str[len] != '\0')
		len++;
	printf("file contains %d chars: \n%s", len, str);




	/* not monty instructions: L<line_number>: unknown instruction <opcode> */


	/* if malloc failed: Error: malloc failed */


	return (0);
}


#include "monty.h"

/**
 * read_textfile - writes the text to stdout
 * @filename: The character to print
 * @letters: size
 * Return: On success size.
 * On error, 0 is returned, and errno is set appropriately.
 */

char *read_textfile(char *filename, size_t letters)
{
	int fd, cr;
	char *s;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	s = malloc(letters * sizeof(char));
	if (s == NULL)
	{
		print_err("Error: malloc failed\n");
		return (NULL);
	}
	cr = read(fd, s, letters);
	if (cr < 0)
	{
		free(s);
		return (NULL);
	}
	return (s);
}

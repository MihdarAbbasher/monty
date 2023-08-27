#include "monty.h"
/**
 * get_cmd_no - get cmd no
 * @s: cmd
 * Return: cmd no
 */

int get_cmd_no(char *s)
{
	int i;
	char *arr[3];

	arr = ["push", "pall", NULL];
	i = 0;
	while(arr[i])
	{
		if (strcmp(s, arr[i]) == 0)
			return (i);
	}
	return (-1);
}

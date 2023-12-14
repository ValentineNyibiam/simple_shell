#include "shell.h"

/**
 * shell_main - Parses the input of the user
 * and executes commands appropriately
 * @shell: A struct containing data of the shell
 *
 * Return: 0(Success)
 */

int shell_main(data shell)
{
	char *input, **token_array;
	int i = 0;

	while (1)
	{
		if (shell.isatty == 1 && shell.ac == 1)
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		input = read_input();
		token_array = tokenize_input(input, " \n");
		execute_cmd(token_array);
		while (token_array[i] != NULL)
		{
			free(token_array[i]);
			i++;
		}
		free(token_array);
		free(input);
	}
	free(input);
	return (0);
}

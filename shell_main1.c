#include "main.h"

/**
* main - Entry point
* @ac: The number of command line arguments
* @av: An array of strings of the command line
* @environ: An array of the environment variables
*
* Return: 0(success)
*/
int main(int ac, char **av, char **environ)
{
	int fd = isatty(STDIN_FILENO);
	data shell;

	shell.sh_name = av[0];
	shell.isatty = fd;
	shell.ac = ac;
	shell.av = av;
	shell.cmd_count = 0;
	shell_main(shell);

	return (0);
}

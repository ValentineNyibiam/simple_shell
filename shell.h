#ifndef SHELL_H
#define SHELL_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

/**
 * struct shell - contains details about our shell program
 * @sh_name: The name of the shell program
 * @isatty: The value of the isatty function
 * @ac: The number of arguments passed to the shell program
 * @av: An array of the arguments passed to the program
 * @cmd_count: Tracks the number of commands executed by the shell program
*/
typedef struct shell
{
	char *sh_name;
	int isatty;
	int ac;
	char **av;
	int cmd_count;
} data;


/* Global environmoent variable */
extern char **environ;

/* Custom function prototypes*/
int shell_main(data shell);
char *read_input(void);
void print_string(char *str);
char **tokenize_input(char *input, char *delim);
void execute_cmd(char **token_array);
int _strlen(char *prgStr);

#endif /* SHELL_H */

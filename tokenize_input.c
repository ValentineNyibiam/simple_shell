#include "shell.h"

/**
 * tokenize_input - Tokenizes the input passed to the program
 * @input: The string to be tokenized
 * @delim: The delimiters to be used
 *
 * Return: An array of the tokens
 */
char **tokenize_input(char *input, char *delim)
{
	char *input_copy, **token_array, *token;
	size_t token_count = 0, i = 0;

	input_copy = malloc(sizeof(char) * (_strlen(input) + 1));
	if (input_copy == NULL)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	_strcpy(input_copy, input);

	token = strtok(input_copy, delim);
	while (token != NULL)
	{
		token_count++;
		token = strtok(NULL, delim);
	}
	free(input_copy);

	token_array = malloc(sizeof(char *) * (token_count + 1));
	token = strtok(input, delim);
	while (token != NULL)
	{
		token_array[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		if (token_array[i] == NULL)
		{
			perror("malloc failed");
			exit(EXIT_FAILURE);
		}
		_strcpy(token_array[i], token);
		token  = strtok(NULL, delim);
		i++;
	}
	token_array[i] = NULL;

	return (token_array);
}

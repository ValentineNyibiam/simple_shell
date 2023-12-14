#include "shell.h"

/**
 * *_strdup - copies a string to a new memory location
 * @str: a pointer to the string to be copied
 *
 * Return: a pointer a duplicate string of str, else NULL
 */
char *_strdup(char *str)
{
	char *str_malloc;
	int i, str_length = 0;

	/* check if str pointer is NULL */
	if (str == NULL)
		return (NULL);

	/*check for the length of the string */
	for (; str[str_length] != '\0'; str_length++)
		;

	/* allocate memory dynamically */
	str_malloc = malloc(str_length * sizeof(char) + 1);

	/* check if str_malloc is NULL */
	if (str_malloc == NULL)
		return (NULL);

	/* copy the content of str to the allocated memory */
	for (i = 0; i < str_length; i++)
		str_malloc[i] = str[i];
	str_malloc[i] = '\0';

	return (str_malloc);
}

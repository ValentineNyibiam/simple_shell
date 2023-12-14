#include "shell.h"

/**
 * print_string - Prints a string to stdout
 * @str: String to be printed
 *
 * Return: void
 */
void print_string(char *str)
{
	if (write(1, str, _strlen(str)) == -1)
	{
		return;
	}
}

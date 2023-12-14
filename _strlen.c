#include "shell.h"

/**
 * _strlen - this is function Calculates the length of a string
 *
 * @prgStr: This is the input string
 *
 * Return: This returns length of the string
 */
int _strlen(char *prgStr)
{
	if (prgStr == NULL || *prgStr == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen(prgStr + 1) + 1);
	}
}

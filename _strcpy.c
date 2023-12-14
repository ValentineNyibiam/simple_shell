#include "shell.h"
/**
 * *_strcpy - Copies a string to the buffer
 * @src: Where string is copied from
 * @dest: Where copied string is pasted to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}

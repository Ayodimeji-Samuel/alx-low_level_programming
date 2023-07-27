#include "main.h"

/**
 * _strlen - a code to show the length of string
 * @s: string to be found
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

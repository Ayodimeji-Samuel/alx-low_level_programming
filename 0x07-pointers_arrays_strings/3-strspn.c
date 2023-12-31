#include "main.h"

/**
 * _strspn - function that gets length of a prefix substring
 * @s: address of the substring
 * @accept: string to search
 * Return: number of characters to be matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}

#include "main.h"

/**
* _memset - a function that fills memory with constant byte
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}

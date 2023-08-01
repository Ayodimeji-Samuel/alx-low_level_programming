#include "main.h"

/**
 * _memcpy - a functio that copies memory area
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

#include "main.h"

/**
 * _memset - entry point
 * @n: number of bytes
 * @b: desired value
 * @s: starting address of memory to be filled
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

#include "main.h"
/**
 * * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to be copied
 * @n: number of bytes to be set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		s[z] = b;
		z++;
	}
	return (s);
}

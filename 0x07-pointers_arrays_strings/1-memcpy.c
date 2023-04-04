#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination memory
 * @src: source
 * @n: number of bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}
	return (dest);
}

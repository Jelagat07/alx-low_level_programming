#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - search a string for any set of a bytes
 * @s: a string
 * @accept: string containing bytes to search for
 * Return: pointer to the byte in s matching byte set or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; *s != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

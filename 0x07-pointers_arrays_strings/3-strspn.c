#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string with charcters to match
 * Return: number of bytes from the original segment
 * that consist bytes from the subset string
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, n, o, flag;

	o = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
	flag = 0;
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (s[m] == accept[n])
	{
	o++;
	flag = 1;
	}
	}
	if (flag == 0)
	{
	return (o);
	}
	}
	return (0);
}

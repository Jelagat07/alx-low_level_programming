#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a string
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}

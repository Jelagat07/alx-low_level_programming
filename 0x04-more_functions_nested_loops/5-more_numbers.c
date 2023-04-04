#include "main.h"
/**
 * more_numbers - prints ten times numbers 0 to 14
 * followed by a newline
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	i++;
}

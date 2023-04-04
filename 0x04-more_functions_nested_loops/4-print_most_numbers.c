#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 ten times
 * excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		while (c != 50 || c != 52)
		{
		_putchar(c);
		}
	}
	_putchar('\n');
}

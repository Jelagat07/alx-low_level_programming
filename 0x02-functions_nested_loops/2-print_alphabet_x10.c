#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int k = 0;

	while (k <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	k++;
	}
}


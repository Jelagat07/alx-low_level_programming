#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by newline
 * Return: Always 0
 */
void print_alphabet(void) /*prototype*/
{
	char ch = 'a';

	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
}


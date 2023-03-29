#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by newline
 * Return: Always 0
 */
void print_alphabet(void); /*prototype*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}


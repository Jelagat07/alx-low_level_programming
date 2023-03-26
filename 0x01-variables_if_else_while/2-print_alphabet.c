#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * then a newline
 * Return: Always 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}



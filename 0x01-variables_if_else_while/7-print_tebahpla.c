#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * in reverse followed by a newline
 * Return: Always 0-success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{putchar(ch);
	}
	putchar('\n');
	return (0);
}

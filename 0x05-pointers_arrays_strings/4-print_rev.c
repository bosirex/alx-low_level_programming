#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
       int ch = 0;

	while (s[ch] != '\0')
	{
	ch++;
	}

	for (ch -= 1; ch >= 0; ch--)
	{
	putchar(s[ch]);
	}
	putchar('\n');
}

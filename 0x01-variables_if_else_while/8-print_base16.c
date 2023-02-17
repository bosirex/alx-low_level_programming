#include <stdio.h>

/**
 * main - prints all all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	int j;
	char ch;

	for (j = 0; j < 10; j++)
		putchar((j % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * rev_string -  reverses a string.
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int j = 0, index = 0;
	char ch;

	while (s[index++])
	j++;

	for (index = j - 1; index >= j / 2; index--)
	{
	j = s[index];
	s[index] = s[j - index - 1];
	s[j - index - 1] = ch;
	}
}

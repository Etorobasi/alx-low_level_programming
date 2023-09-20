#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0, i;
	int len;
	char *st, *sr, sp;

	while (s[length] != '\0')
	{
		length++;
	}
	len = length;
	st = s;
	sr = s;
	for (i = 0; i < len - 1; i++)
	{
		sr++;
	}
	for (i = 0; i < len / 2; i++)
	{
		sp = *sr;
		*sr = *st;
		*st = sp;

		st++;
		sr--;
	}
}

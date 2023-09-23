#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: string to be amended
 *
 * Return: returns the ammended string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else if (c[i - 1] == ' ' || ',' || '.' || ';' || '?')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else if (c[i - 1] == '	' || '\n' || '{' || '}')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else if (c[i = 1] == '!' || '(' || ')' || '"')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = c[i] + 32;
				continue;
			}
		}
	}
	return (c);
}

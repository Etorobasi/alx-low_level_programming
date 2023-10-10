#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdig - checks if a given character is digit
 * @c: given character
 *
 * Return: returns 0 if not an digit, 1 if it is
 */
int _isdig(char *c)
{
	int i;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - obtains the length of a given string
 * @a: given string
 *
 * Return: returns the length
 */
int _strlen(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - prints an error message to stdout
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i, len1, len2, len, dig1, dig2, carry, *result, s = 0;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isdig(s1) || !_isdig(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (dig1 * dig2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			s = 1;
		if (s)
			_putchar(result[i] + '0');
	}
	if (!s)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

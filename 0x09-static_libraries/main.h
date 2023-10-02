#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c);
int _abs(int);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
int _isalpha(int c);
unsigned int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
void _puts(char *str);
int _islower(int c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
char *_strncat(char *dest, char *src, int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _isdigit(int c);
int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
#endif

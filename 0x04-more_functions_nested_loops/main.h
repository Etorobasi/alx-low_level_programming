#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: character to be written to output
 * _isupper - Checks for uppercase letters
 * @c: letter to be checked
 * _isdigit - checks for digits between 0 and 9
 * @c: digit to be checked
 * mul - multiplies 2 integers
 * @a: integer 1
 * @b: integer 2
 * print_numbers - print numbers 0-9
 * print_most_numbers - prints most numbers excluding 2 and 4
 * more_numbers - prints 0-14 in 10 lines
 * print_line - draws a straight line in the terminal 
 *
 * Return: returns a value of 1 is checked successfully, otherwise 0
 */
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
#endif

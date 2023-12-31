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
 * @n: the number of lines to be printed
 * print_diagonal - draws a diagonal on the terminal
 * @n: the number of times the character \ should be printed
 * print_square - prints a square followed by a newline
 * @size: size of square
 * print_triangle - prints triangle on the terminal display
 * @size - size of triangle
 * print_number - prints number
 * @n: number to be printed
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
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
#endif

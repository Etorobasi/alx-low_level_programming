#include "lists.h"
void print_first(void)__attribute__ ((constructor));
/**
 * print_first - prints a given string before the main function is executed
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

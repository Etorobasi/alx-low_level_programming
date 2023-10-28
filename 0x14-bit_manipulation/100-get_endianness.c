#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	int lit_big;

	lit_big = (int) (((char *)&x)[0]);
	return (lit_big);
}

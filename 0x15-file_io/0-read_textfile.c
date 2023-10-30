#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters
 * it could read and print, or 0 if failure occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, ptr, letters);
	wr = write(STDOUT_FILENO, ptr, rd);

	if (op == -1 || rd == -1)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(op);
	return (wr);
}

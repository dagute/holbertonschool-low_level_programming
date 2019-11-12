#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int wr, op, cl, rd;
	char *bufer;

	if (filename == NULL)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	if (bufer == NULL)
		return (-1);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	rd = read(op, bufer, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, bufer, rd);
	if (wr == -1)
		return (0);
	cl = close(op);
	if (cl == -1)
		return (0);
	free(bufer);
	return (rd);
}

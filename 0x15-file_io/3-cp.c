#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ff, ft, rd, wr;
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char bufer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (ft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd = read(ff, bufer, 1024);
	while (rd > 0)
	{
		wr = write(ft, bufer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rd = read(ff, bufer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if (close(ff) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	if (close(ft) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	return (0);
}

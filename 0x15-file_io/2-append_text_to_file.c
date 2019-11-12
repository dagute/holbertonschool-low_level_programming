#include "holberton.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap, cl, tot;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	ap = open(filename, O_WRONLY | O_APPEND);
	if (ap == -1)
	{
		return (-1);
	}
	tot = write(ap, text_content, strlen(text_content));
	if (tot == -1)
		return (-1);

	cl = close(ap);
	if (cl == -1)
		return (-1);

	return (1);
}

#include "holberton.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int tot, cf;

	if (filename == NULL)
		return (-1);
	cf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (cf == -1)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
		/*while (text_content[x] != '\0')
		  x++;*/

	tot = write(cf, text_content,strlen(text_content));
	if (tot == -1)
		return (-1);

	close(cf);
	return (1);
}

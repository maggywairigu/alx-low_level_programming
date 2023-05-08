#include "main.h"
/**
 * append_text_to_file - Append text to the end of the file
 * @filename: name of the file
 * @text_content: string to add to the end of a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescriptor, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	filedescriptor = open(filename, O_APPEND | O_WRONLY);
	if (filedescriptor == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(filedescriptor, text_content, i);
	if (status == -1)
		return (-1);

	close(filedescriptor);
	return (1);
}

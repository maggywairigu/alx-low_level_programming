#include "main.h"
/**
 *append_text_to_file - Append text to the end of a file
 *@file: name of file
 *@text: string to add to end of file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *file, char *text)
{
	int fd, write_status, i;
	if(file == NULL)
		return (-1);
	if(text == NULL)
		return (1);
	fd = open(file, O_APPEND | O_WRONLY);
	if(fd == -1)
		return (-1);
	for (i = 0; text[i] != '\0'; i++)
		;
	write_status = write(fd, text, i);
	if(write_status == -1)
		return (-1);
	close(fd);
	return (1);
}

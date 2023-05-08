#include "main.h"
/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedescriptor, readstatus, i;

	if (filename == NULL)
		return (-1);

	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filedescriptor == -1)
		return (-1);


	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		readstatus = write(filedescriptor, text_content, i);
		if (readstatus == -1)
			return (-1);
	}

	close(filedescriptor);
	return (1);
}

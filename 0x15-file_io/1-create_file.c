#include "main.h"
/**
 *create_file -create a file with read/write access for user
 *@file: name of file to create
 *@text: string to write to file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *file, char *text)
{
	int fd, write_status, i;
	if(file == NULL)
		return (-1);
	fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |S_IWUSR);
	if(fd == -1)
		return (-1);
	if(text)
	{
		for(i = 0; text[i] != '\0'; i++)
			;
		write_status = write(fd, text, i);
		if (write_status == -1)
			return (-1);
	}
	close(fd);
	return (-1);
}

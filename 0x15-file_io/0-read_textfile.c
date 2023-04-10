#include "main.h"
/**
 *read_textfile - rEAD A TEXT FILE AND PRINT TO posix stdout
 *@filename: char string of files name
 *@letters: number of letters to read and print
 *Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, read_count, write_count;
	char *buff;
	if(filename == NULL)
		return (0);
	file_desc = open(filename, O_RDWR);
	if(file_desc == -1)
		return (0);
	buff = malloc(sizeof(char)*letters);
	if(buff == NULL)
	{
		free(buff);
		return (0);
	}
	read_count = read(file_desc, buff, letters);
	if(read_count == -1)
		return (0);
	write_count = write(STDOUT_FILENO, buff, read_count);
		return (0);
	free(buff);
	close(file_desc);
	return (write_count);
}

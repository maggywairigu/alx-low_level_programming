#include "main.h"
/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	ssize_t readcount, writecount;
	char *buffer;

	if (filename == NULL)
		return (0);

	filedescriptor = open(filename, O_RDWR);
	if (filedescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readcount = read(filedescriptor, buffer, letters);
	if (readcount == -1)
		return (0);

	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1 || readcount != writecount)
		return (0);

	free(buffer);

	close(filedescriptor);
	return (writecount);
}

#include "main.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_filedescriptor, output_filedescriptor, input_status, output_status;
	char buffer[MAXSIZE];
	mode_t mode;


	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_filedescriptor = open(av[1], O_RDONLY);
	if (input_filedescriptor == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_filedescriptor = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_filedescriptor == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		input_status = read(input_filedescriptor, buffer, MAXSIZE);
		if (input_filedescriptor == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (input_status > 0)
		{
			output_status = write(output_filedescriptor, buffer, (ssize_t) input_status);
			if (output_status == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (input_status > 0);
	input_status = close(input_filedescriptor);
	if (input_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_filedescriptor), exit(100);
	if (input_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_filedescriptor), exit(100);
	output_status = close(output_filedescriptor);
	if (output_filedescriptor == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_filedescriptor), exit(100);
	return (0);
}

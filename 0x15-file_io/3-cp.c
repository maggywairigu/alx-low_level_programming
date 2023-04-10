#include "main.h"
#define MAXSIZE 1204
#DEFINE SE STDERR_FILENO
/**
 *the main function copies the contents of one file to another
 *It taskes on the name of the file to copied and the name of the file to cpy it
 *@sc: argument count
 *@ac: strings as arguments
 *Return: 0 on successful completion
 */
int main(int ac, char *av[])
{
	int input_fd, output_fd, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP  | S_IROTH;

	if(ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);

	input_fd = open(av[1], O_RDONLY);
	if(input_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	do{
		istatus = read(input_fd, buf, MAXSIZE);
		if(istatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if(istatus > 0)
		{
			ostatus = write(output_fd, buf, (ssize_t) istatus);
			if(ostatus == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
			}
		}
	} while(istatus > 0);

	istatus = close(input_fd);
	if(istatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_fd), exit(100);
	ostatus = close(input_fd);
	if(istatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_fd), exit(100);

	return (0);
}

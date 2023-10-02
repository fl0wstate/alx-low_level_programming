#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and output its content to the STDOUT_FILENO
 * @filename: pointer to a memory address containing the content of the file.
 * @letters: number of bytes to write to the STDOUT_FILENO
 * Return: number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	ssize_t size_of_read = 0, size_of_write = 0, ret = 0;
	char *local_buffer = (char *)malloc(sizeof(char) * letters);

	if (!filename || !local_buffer) /* check for empty buffers */
		return (0);

	fd = open(filename, O_RDONLY);/* read only mode */
	if (fd == -1)
	{
		free(local_buffer);
		return (0);
	}
	size_of_read = read(fd, local_buffer, letters); /* reading file */
	if (size_of_read == -1)
	{/* handling read */
		free(local_buffer);
		close(fd);
		return (0);
	}
	while (local_buffer[i])
		i++;
	size_of_write = write(STDOUT_FILENO, local_buffer, i);/* write to STDOUT */
	if (size_of_write == -1)
	{
		free(local_buffer);
		close(fd);
		return (0);
	}
	ret = size_of_write;/* keep record of the last write system call */
	free(local_buffer); /* avoid memory leaks */
	close(fd); /* close the file fd after you are done using it.*/
	return (ret);
}
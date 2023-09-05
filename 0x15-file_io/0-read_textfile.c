#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it
* @letters: the number of letter it should print and read
* @filename: output value
* Return: the actual number of latters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
char *buffer;
ssize_t bytes_read, bytes_written;
if (filename == NULL)
{
return (0);
}
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
return (0);
}
buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(file_descriptor);
return (0);
}
bytes_read = read(file_descriptor, buffer, letters);
if (bytes_read == -1)
{
close(file_descriptor);
free(buffer);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(file_descriptor);
free(buffer);
return (0);
}
close(file_descriptor);
free(buffer);
return (bytes_written);
}

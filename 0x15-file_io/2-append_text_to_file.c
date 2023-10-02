#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* append_text_to_file - a function that appends a function at the end of a file
* @filename: is the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (0);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}

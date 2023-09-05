#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: is a NULL terminated string
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
return (1);
{
file = fopen(filename, "a");
if (file == NULL)
{
return (-1);
}
if (fputs(text_content, file) == EOF)
{
fclose(file);
return (-1);
}
fclose(file);
return (1);
}
}

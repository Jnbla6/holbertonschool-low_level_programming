#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t byteswrite;
int len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IREAD | S_IWRITE);
if (fd == -1)
return (-1);

while (text_content[len])
len++;

byteswrite = write(fd, text_content, len);
if (byteswrite == -1)
{
return (-1);
}

close(fd);

return (1);
}

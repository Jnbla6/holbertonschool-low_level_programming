#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int fdsrc, fddst;
    ssize_t bytesread, byteswrite;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fdsrc = open(argv[1], O_RDONLY);
    if (fdsrc == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fddst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fddst == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        close(fdsrc);
        exit(99);
    }

    while ((bytesread = read(fdsrc, buffer, 1024)) > 0)
    {
        byteswrite = write(fddst, buffer, bytesread);
        if (byteswrite == -1 || byteswrite != bytesread)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            close(fdsrc);
            close(fddst);
            exit(99);
        }
    }

    if (bytesread == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        close(fdsrc);
        close(fddst);
        exit(98);
    }

    if (close(fdsrc) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fdsrc);
        close(fddst);
        exit(100);
    }

    if (close(fddst) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fddst);
        exit(100);
    }

    return (0);
}
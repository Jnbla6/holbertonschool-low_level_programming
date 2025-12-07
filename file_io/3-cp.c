#include "main.h"

int main(int argc, char *argv[])
{
    int fdsrc, fddst;
    ssize_t bytesread, byteswrite;
    char buffer[1024];

    if (argc != 3)
    exit(97);

    fdsrc = open(argv[1], O_RDONLY);
    if (fdsrc == -1)
    {
    dprintf(2, "Error: Can't read from file %s\n", argv[1]);
    exit(97);
    }

    fddst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fddst == -1)
    {
    dprintf(2, "Error: Can't write to %s\n", argv[1]);
    exit(97);
    }

    while((bytesread = read(fdsrc, buffer, 1024)) > 0)
    {
    bytesread = read(fdsrc, buffer, 1024);
    if(bytesread == -1)
    {
    dprintf(2, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
    }

    byteswrite  = write(fddst, buffer, bytesread);
    if(byteswrite == -1)
    {
    dprintf(2, "Error: Can't write to %s\n", argv[1]);
    exit(99);
    }
    }

    close(fdsrc);
    if (close(fdsrc) == -1)
    exit(100);

    close(fddst);
    if (close(fddst) == -1)
    {
    dprintf(2, "Error: Can't read from file %s\n", argv[1]);
    exit(100);
    }
    return(0);
}

#include "main.h"

int main(int argc, char *argv[])
{
    int fdsrc, fddst;
    ssize_t bytesread, byteswrite;
    char buffer[1024];

    if (argc != 3)
    exit(97);

    fdsrc = open(argv[1], O_RDONLY);
    if (fdsrc == 0)
    exit(97);

    fddst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fddst == 0)
    exit(97);

    while(fdsrc)
    {
    bytesread = read(fdsrc, buffer, 1024);
    if(bytesread == -1)
    exit(98);

    byteswrite  = write(fddst, buffer, bytesread);
    if(byteswrite == -1)
    exit(98);
    }
    close(fdsrc);
    close(fddst);

    return(0);
}

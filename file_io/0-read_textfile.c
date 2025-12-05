#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *pf = fopen(filename, "r");
    char buffer[255];
    while(fgets(buffer, 255, pf) != NULL)
    printf("%s\n", buffer);

    fclose(pf);
    return (letters);
}
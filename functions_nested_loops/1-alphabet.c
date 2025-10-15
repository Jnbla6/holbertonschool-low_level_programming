#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
* main -n is random and printf print what is it
* Return: 0 is sucess
*/
void print_alphabet(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}

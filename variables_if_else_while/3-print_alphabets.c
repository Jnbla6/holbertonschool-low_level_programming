#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
* main -n is random and printf print what is it
* Return: 0 is sucess
*/
int main(void)
{
char alph;
char big;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
for (big = 'A'; big <= 'Z'; big++)
{
putchar(big);
}
putchar('\n');
return (0);
}

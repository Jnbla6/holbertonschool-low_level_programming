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
for (alph = 'a'; alph <= 'z'; alph++)
{
char aLPH;
for (aLPH = 'A'; aLPH <= 'Z'; aLPH++)
putchar(alph);
putchar(aLPH);
}
putchar('\n');
return (0);
}

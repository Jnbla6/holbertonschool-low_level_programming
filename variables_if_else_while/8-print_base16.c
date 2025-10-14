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
int num;
for (num = 0; num <= 9; num++)
{
putchar(num);
}
for (alph = 'a'; alph <= 'f'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}

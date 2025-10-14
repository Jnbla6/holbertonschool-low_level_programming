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
char alph2;
char alph3;
for (alph = 'a'; alph <= 'd'; alph++)
{
putchar(alph);
}
for (alph2 = 'f'; alph2 <= 'p'; alph2++)
{
putchar(alph2);
}
for (alph3 = 'r'; alph3 <= 'z'; alph3++)
{
putchar(alph3);
putchar('\n');
}
return (0);
}

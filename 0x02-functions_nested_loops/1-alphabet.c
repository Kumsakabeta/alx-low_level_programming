#include "main.h"
#include<stdio.h>

/**
*  main - Entry point
*
*  Description: prints the character
*
*  Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')

{
putchar(c);
c++;
putchar('\n');
}
return (0);
}

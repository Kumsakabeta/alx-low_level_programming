#include "main.h"
#include <stdio.h>
/**
* main - check the code
*
* description:the puts function
*
*  Return: Always 0 (Sucess)
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);

}
_putchar('\n');
}

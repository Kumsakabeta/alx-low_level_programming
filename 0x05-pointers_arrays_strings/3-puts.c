#include "main.h"
#include <stdio.h>

/**
* _puts - check the code
* @str :argument of the string
*
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);

}
_putchar('\n');
}

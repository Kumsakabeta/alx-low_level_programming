#include "main.h"
#include <string.h>
/**
* print_rev -> print a string revers
*
*  @s :the string to be printed
*
*/
void print_rev(char *s)
{
int i, n;
s = "kumsa";
n = strlen(s);
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);

}
}

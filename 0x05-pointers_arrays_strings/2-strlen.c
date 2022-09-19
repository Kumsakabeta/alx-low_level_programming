#include "main.h"
#include <string.h>

/**
*  _strlen -> function to get the length of a string
*  @s: string pointer to passed this function
*
*  return:returns the length of the string
*/
int _strlen(char *s)

{
int len;

for (; *s != '\0' ; s++)
{
len += 1;

}
return (_strlen(s));
}

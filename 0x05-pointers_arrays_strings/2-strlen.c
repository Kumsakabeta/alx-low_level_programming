#include "main.h"
#include <string.h>
/**
* _strlen -> function to get the length of a string
*  @s: string pointer to passed this function
*  return:returns the length of the string
*/
int main(void)
{
char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);

}

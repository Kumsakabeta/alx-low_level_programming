nclude <unistd.h>
/**
*  _putchar - write the character c to stdout
*
* @c :the character to to print
* return :on success 1
* on error ,-1 is returned ,and errno is set appropritely
*/

int _putchar(char c)

{

return (write(1, &c, 1));

}

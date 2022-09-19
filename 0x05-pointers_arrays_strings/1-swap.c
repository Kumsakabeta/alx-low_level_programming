#include "main.h"
#include <stdio.h>
/**
* swap_int -> given two integers swap the values
* * @a: [arameter 1
* * @b: parameter 2
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = *tmp;

}

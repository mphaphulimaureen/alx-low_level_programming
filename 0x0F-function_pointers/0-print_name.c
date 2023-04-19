#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints name.
* @name: input name.
* @f: function pointer.
*
* Return: no return
*/
void print_name(char *name, void (*f)(char *))
{
        if (name && f)
                return;
        f(name);
}

#include <ctype.h>
#include "string_procs.h"

void rm_right_space(char* s)
{
    int length = 0;

    while(*s != '\0') 
    {
        s++; 
        length++; 
    }
    s--; 
    length--; 
    

    while (isspace(*s) && *s != '\0')
    {
        length--; 
        s--; 
    }

    s++; 
    *s = '\0';  
    s-= length; 
}
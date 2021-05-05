#include <ctype.h>
#include "string_procs.h"

void rm_left_space(char* s)
{

    int beginning_index = 0; 
    while (isspace(*s) && *s != '\0')
    {
        beginning_index++; 
        s++; 
    }

    //resets pointer at the beginning of the word
    s-= beginning_index; 

    int i = 0; 

    while (s[i + beginning_index] != '\0')
    {
        s[i] = s[i + beginning_index]; 
        ++i; 
    }

    s[i] = '\0'; 

}


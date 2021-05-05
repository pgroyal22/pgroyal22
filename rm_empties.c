#include <stdio.h>
#include "string_procs.h"

int stringLength(const char * s)
{
    int len = 0;

    while(*s != '\0')
    {
        s++; 
        len++; 
    }
    s-= len; 

    return len;
}

void rm_empties(char * * words)
{
    while(*words != NULL)
    {
        if(stringLength(*words) == 0)
        {
            int replacements = 0;
            while(*words != NULL)
            {
                char * plus1 = *(words + 1);  
                *words = plus1; 
                
                words++; 
                replacements++; 
            }
            
            words -= replacements; 

        }
        words++; 
    }
}

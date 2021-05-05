#include <ctype.h> 
#include "string_procs.h"

void capitalize(char * s)
{
    int firstLetter = 1; 

    // if (islower(*s))
    // {
    //     *s = *s - 32; 
    // }
    while (*s != '\0')
    {
        if (isspace(*s))
        {
            firstLetter = 1;
        }
        else if( firstLetter == 1)
        {
            if (islower(*s))
            {
                (*s) -= 32; 
            }
            
            firstLetter = 0; 
        }
        else if (firstLetter == 0 && isupper(*s))
        {
            (*s)+=32;
            firstLetter = 0; 
        }
        

        s++; 
    }
}



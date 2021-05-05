#include <ctype.h>
#include "string_procs.h"

int all_letters(char *s)
{
    int letters = 1; 

    while (*s != '\0')
    {
        if (!isalpha(*s))
        {
            letters =  0; 
        }

        ++s; 
    }

    return(letters); 
}



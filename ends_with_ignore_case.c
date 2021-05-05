#include "string_procs.h"

int ends_with_ignore_case(char *s, char *suff)
{
    int suffLen = 0;


    
    while(*suff != '\0')
    {   
        suffLen++;
        suff++;
    }

    suff-=suffLen; 

    while(*s != '\0')
    {
        s++;    
    }

    
    for(int i = 0; i < suffLen; i++)
    {
        s--; 
    }

    int same = 1;
    while(*s != '\0')
    {
        if (*s == *suff || *s == *suff - 32 || *s - 32 == *suff )
        {
            s++; 
            suff++; 
        }
        else
        {
            same = 0;
            break; 
        }
    }

    return same; 
}


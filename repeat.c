#include <stdlib.h>
#include "string_procs.h"

char * repeat(char * s, int x, char sep)
{
    if (s == NULL){ return NULL;}
    
    int sLen = 0;
    while(*s != '\0')
    {
        sLen++; 
        s++;
    }

    s-=sLen; 

    int repeatedLen = x*(sLen + 1); 
    char * repeated = malloc(repeatedLen); 

    for(int i = 0; i < x; i++)
    {
        while(*s != '\0')
        {
            *repeated = *s; 
            repeated++; 
            s++; 
        }
        s-= sLen; 
        *repeated = sep; 
        repeated++; 
    }
    
    *repeated = '\0'; 
    repeated -= (repeatedLen); 


    return repeated; 
}


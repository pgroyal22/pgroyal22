#include <stdlib.h> 
#include "string_procs.h"

char * dedup(char * s)
{   
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    s-=len; 

    char * noDups = malloc(len + 1);
    int currentPosit = 0; 

    while (*s != '\0')
    {
        int found = 0; 

        for (int i = 0; i < currentPosit; i++)
        {
            if (*s == noDups[i])
            {
                found = 1; 
            }
        }

        if (!found)
        {
            noDups[currentPosit] = *s; 
            currentPosit++; 
        }

        s++;
        
    }

    noDups[currentPosit + 1] = '\0';

    return(noDups); 
    
}

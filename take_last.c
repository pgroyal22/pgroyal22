#include "string_procs.h"

void take_last(char * s, int n)
{
    
    char * new_beginning = s; 

    while (*new_beginning != '\0')
    {
        new_beginning++; 
    }

    new_beginning -= n; 

    while (*new_beginning != '\0')
    {
        *s= *new_beginning;
        s++; 
        new_beginning++; 
    }

    *s = '\0';
    s-=n; 
}


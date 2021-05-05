#include <stdlib.h> 
#include "string_procs.h"

char * pad (char * s, int d)
{
    if(*s == '\0')
    {
        return NULL; 
    }

    int len = 0;
    while(*s != '\0')
    {
        len++; 
        s++;
    }

    s-= len; 

    int num_spaces = 0;

    while ((len % d) > 0)
    {
        len++; 
        num_spaces++; 
    }

    char * padded = malloc(len + 1); 

    while(*s != '\0')
    {
        *padded = *s; 
        padded++;
        s++;  
    }

    for (int i = 0; i < num_spaces; i++)
    {
        *padded = ' ';
        padded++;
    }

    padded[len] == '\0'; 
    padded -=len; 

    return (padded); 
}

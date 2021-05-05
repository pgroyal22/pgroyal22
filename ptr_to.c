#include <stddef.h>
#include "string_procs.h"

char * ptr_to( char * h, char * n)
{

    while (*h != '\0')
    {
        char * beginning = h; 
        char * substr = n; 

        while (*beginning != '\0' && *substr != '\0' && *beginning == *substr)
        {
            ++beginning; 
            ++substr; 
        }

        if (*substr ==  '\0')
        {
            return h; 
        }

        
        ++h; 

    }
    
    return NULL; 
}

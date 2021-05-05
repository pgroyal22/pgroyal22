#include "string_procs.h"

int find (char * h, char * n)
{
    int index = -1;

    while (*h != '\0')
    {
        ++index; 
        char * beginning = h; 
        char * substr = n; 

        while (*beginning != '\0' && *n != '\0' && *beginning == *substr)
        {
            ++beginning; 
            ++substr; 
        }

        if (*substr ==  '\0')
        {
            return index; 
        }

        
        ++h; 

    }
    index = -1; 
    return index;  

}
#include "string_procs.h"

long diff(char *s1, char *s2)
{
    // returns the number of characters by which the two strings differ

    long count = 0; 

    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            ++count; 
            ++s1; ++s2; 
        }
    }

    while (*s1 != '\0')
    {
        ++count; 
        ++s1; 
    }

    while (*s2 != '\0')
    {
        ++count;
        ++s2; 
    }

    return count; 
}




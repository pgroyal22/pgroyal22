#include "string_procs.h"

int strcmp_ign_case(char * s1, char * s2)
{
    // capitalize s1
    while (*s1 != '\0')
    {
        char c = *s1;
        if (c >= 'a' && c <= 'z')
        {
            *s1 = *s1-32;
        }
        s1++; 
    }

    // capitalize s2
    while (*s2 != '\0')
    {
        char c = *s2;
        if (c >= 'a' && c <= 'z')
        {
            *s2 = *s2-32;
        }
        s2++; 
    }


    while(*s1 != '\0')
    {
        if (*s1 == *s2)
        {
            s1++; 
            s2++; 
        }
        else
        {
            break; 
        }
    }

    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

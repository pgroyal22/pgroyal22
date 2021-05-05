#include <stdlib.h>
#include "string_procs.h"


char * str_zip(char * s1, char *s2)
{
    int len1 = 0;
    while (*s1 != '\0')
    {
        len1++; 
        s1++; 
    }

    s1 -= len1; 

    int len2 = 0;
    while (*s2 !=  '\0')
    {
        len2++; 
        s2++; 
    }

    s2 -= len2; 

    int total_length = len1 + len2 + 1; 


    char * returnStr = malloc(total_length); 
    int i = 0;

    while (i < total_length - 1)
    {
        if (*s1 != '\0')
        {
            returnStr[i] = *s1; 
            s1++; 
            i++; 
            
            if(*s2 != '\0')
            {
                returnStr[i] = *s2;
                s2++; 
                i++; 
            }
        }
        else if (*s2 != '\0')
        {
            returnStr[i] = *s2;
                s2++; 
                i++; 
        }
    }
    returnStr[total_length - 1] = '\0'; 
}

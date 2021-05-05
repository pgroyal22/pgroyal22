#include <stdlib.h>
#include "string_procs.h"


int str_Length(const char * s)
{
    int len = 0;

    while(*s != '\0')
    {
        s++; 
        len++; 
    }
    s-= len; 

    return len;
}

int findit( char * h, char * n)
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


char * replace (char * s, char * pat, char * rep)
{
    int sLen  = str_Length(s);
    int patLen = str_Length(pat); 
    int repLen = str_Length(rep);  
    int difference = repLen - patLen;   

    char * replaced = malloc((sLen + 1) * sizeof(char)); 
    
    int replacedLen = sLen; 
    

    int foundIndex = 0; 
    int replacementIndex = 0; 
    while( (foundIndex = findit(s,pat)) != -1)
    {
        // rewind replaced 
        replaced -= replacementIndex; 
        replacedLen += difference; 
        replaced = realloc(replaced, (replacedLen + 1)*sizeof(char)); 
        replaced += replacementIndex; 
        
        // fill in up to the found index
        for (int i = 0; i < foundIndex; i++)
        {
            *replaced = *s; 
            replaced++; 
            s++; 

            replacementIndex++; 
        }

        // fill in where the pattern starts
        for (int j = 0; j < repLen; j++)
        {
            *replaced = *rep; 
            replaced++; 
            rep++; 

            replacementIndex++; 
        }
        
        // increment s past the thing being replaced
        s += patLen; 

        // rewind rep pointer
        rep-= repLen; 
    }

    while(*s != '\0')
    {
        *replaced = *s; 
        replaced++; 
        s++; 
    }

    *(replaced+1) = '\0'; 
    return replaced -= replacedLen; 
}


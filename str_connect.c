#include <stdlib.h>
#include "string_procs.h"

int strngLength(const char * s)
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

char * str_connect(char * * strings, int n , char c)
{
    int connectedLen = 0;
    char * connectedString = NULL;
    
     

    for (int i = 0; i < n; i++)
    {   
        // resets pointer to beginning of string
        connectedString -= (connectedLen); 
        
        // allocates memory for adding the new string 
        int currentStrLen = strngLength(*strings); 
        connectedLen += (currentStrLen + 1); 
        connectedString = realloc(connectedString, connectedLen * sizeof(char)); 
        
        
        // adds the new string
        connectedString += (connectedLen - 1 - currentStrLen);

        while (**strings != '\0')
        {
            *connectedString = **strings; 
            (*strings)++; 
            connectedString++;
        }
        *connectedString = c; 
        connectedString++; 
        strings++; 
    }

    connectedString --; 
    *connectedString = '\0'; 
    connectedString -= connectedLen - 1; 

    return connectedString; 
}



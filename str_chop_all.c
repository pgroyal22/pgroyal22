#include <stdlib.h>
#include "string_procs.h"

char * * str_chop_all(char *s, char c)
{   
    int returnArrayLen = 1;
    char * * returnArray = malloc(returnArrayLen * sizeof(char *));
    
    int tokenNum = 0; 
    char * currentToken = s; 

    while(*s  != '\0')
    {   
        if (*s == c)
        {   
            *s = '\0';
            s++; 

            returnArrayLen++; 
            returnArray = realloc(returnArray, returnArrayLen * sizeof(char *));

            returnArray[tokenNum] = currentToken; 
            currentToken = s; 
            tokenNum++;
        }
        else
        {
            s++; 
        }
    }

    returnArrayLen++; 
    returnArray = realloc(returnArray, returnArrayLen * sizeof(char *));
    returnArray[returnArrayLen - 2] = currentToken;

    returnArray[returnArrayLen - 1] = NULL; 
    return returnArray; 
}

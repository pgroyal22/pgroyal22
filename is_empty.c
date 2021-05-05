#include <ctype.h>
#include <stddef.h>
#include "string_procs.h"

int is_empty(char * s)
{
    if (s == NULL){      return 1;}
    else if (*s == '\0'){return 1;}
    
    while(isspace(*s))
    {
        s++; 

        if (*s = '\0'){  return 1;}
    }

    return 0;
}
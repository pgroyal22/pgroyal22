#include <ctype.h>
#include "string_procs.h"

void rm_space(char * s)
{
    int beginning_index = 0; 
    while (isspace(*s) && *s != '\0')
    {
        beginning_index++; 
        s++; 
    }

    //resets pointer at the beginning of the word
    s-= beginning_index; 

    int i = 0; 

    while (s[i + beginning_index] != '\0')
    {
        s[i] = s[i + beginning_index]; 
        ++i; 
    }

    s[i] = '\0';


    int end_index = 0; 

    while (!isspace(*s) && *s != '\0')
    {
        ++end_index; 
        ++s; 
    }

    //resets pointer at the beginning of the word
    s-= end_index; 

    s[end_index] = '\0'; 
}

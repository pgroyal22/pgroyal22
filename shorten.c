#include "string_procs.h"
void shorten(char * s, int new_length)
{
    char * temp = s; 

    int length = 0;
    while(*temp != '\0')
    {
        ++length; 
        ++temp;
    }

    if (new_length < length)
    {
        s[new_length] = '\0'; 
    }
}
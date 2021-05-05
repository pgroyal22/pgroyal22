
long num_in_range(char *s1, char b, char t)
{
    long count = 0; 

    while(*s1 != '\0')
    {
        if ((*s1 > b) && (*s1 < t))
        {
            ++count; 
        }

        ++s1; 
    }

    return count; 
}
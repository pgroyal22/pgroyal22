#include <stdio.h>
#include <stdlib.h>
#include "string_procs.h"

int main(int argc, char const *argv[])
{
    //1
    char * letter_string = "sdfsdf"; 
    char * letter_string2 = "2dgd234"; 

    int allLetters = all_letters(letter_string); 
    int allLetters2 = all_letters(letter_string2); 

    printf("%d\n", allLetters); 
    printf("%d\n", allLetters2); 

    //2 
    char * letters = "dsfdsasdf"; 

    int in_range = num_in_range(letters, 'a', 'p'); 

    printf("\n%d\n", in_range); 

    //3 
    char * str1 = "Hello, world"; 
    char * str2 = "dedlfh f"; 

    int posit_differences = diff(str1, str2); 

    printf("\n%d\n", posit_differences); 

    //4
    char string[] = "Hello World"; 

    printf("\n%s", string); 

    shorten(string, 3); 

    printf("\n%s\n", string); 

    //5 
    char s1[] = "sdfsdfsd"; 
    char s2[] = "sfddfdsfdsfds"; 

    printf("\n%d\n", len_diff(s1, s2)); 

    //6 
    char s3[] = "   hello world  "; 
    
    printf("\n%s", s3); 
    rm_left_space(s3); 
    printf("\n%s\n", s3); 

    //7 
    char s4[] = "   hello world  "; 
    
    printf("\n%s", s4); 
    rm_right_space(s4); 
    printf("\n%s\n", s4);

    //8 
    char s5[] = "   hello world  "; 
    
    printf("\n%s", s5); 
    rm_space(s5); 
    printf("\n%s\n", s5);

    //9 
    char * s6 = "Hello World"; 
    printf("\n%d\n", find(s6, "World")); 

    //10
    char * s7 = "Hello World"; 
    printf("\n%s\n", ptr_to(s7, "World")); 

    //11 
    char * empty = "    "; 
    printf("\n%d\n", is_empty(empty)); 

    //12  
    char * s8 = str_zip("hello", "world");
    printf("\n%s\n", s8); 
    free(s8); 

    //13
    char s9[] = "heLlo WorLD"; 
    printf("\n%s", s9); 
    capitalize(s9); 
    printf("\n%s\n", s9); 

    //14 
    printf("\n%d\n", strcmp_ign_case("hello", "hold")); 
    
    //15 
    char s10[] = "hello World"; 
    take_last(s10, 4); 
    printf("\n%s\n", s10); 

    //16 
    char * s11 = "hello World dsdf"; 

    char * returned = dedup(s11); 
    
    printf("\n%s\n", returned); 
    free(returned); 

    //17   
    char * s12 = "hello world"; 

    char * padded = pad(s12, 12); 

    printf("\n%s.\n", padded); 
    free(padded); 

    //18
    char * s13 = "almost done"; 

    printf("\n%d\n", ends_with_ignore_case(s13, "oNe")); 

    // 19 
    char *s14 = "sdfsdf"; 

    char * repeated = repeat(s14, ' '); 

    printf("\n%s\n", repeated); 
    free(repeated); 

    // 20 
    char *s15 = "NBA X rocks, X NBA"; 

    char * replaced = replace(s15, "X ", "rocks"); 

    printf("\n%s\n", replaced); 
    free(replaced); 


    // 21 
    char * strs[] = {"Washington", "Jefferson", "Adams"}; 
    
    char * connected = str_connect(strs, 2, '+'); 

    printf("\n%s\n", connected); 
    free(connected); 

    // 22
    puts(" ");
    char * s16[] = {"dfsdsf", "", "dfs", "", NULL}; 

    rm_empties(s16); 

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", s16[i]);
    }

    //23 
    char * s17 = "I am ready for a nice vacation"; 

    puts(" ");
    char * * chopped = str_chop_all(s17, " ");

    int choppedLen = 0;
    while(*chopped != NULL)
    {   
        printf("%s\n", *chopped);
        choppedLen++;  
        chopped++; 
    }

    chopped -= choppedLen; 
    free(chopped); 













    return 0;
}

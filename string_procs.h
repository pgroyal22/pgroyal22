#ifdef STRING_PROCS_H_
#define STRING_PROCS_H_

int all_letters(char *); 
int num_in_range(char *, char, char);
int diff(char *, char *); 
void shorten(char *, int); 
int len_diff(char *, char*); 
void rm_left_space(char *);
void rm_right_space(char *); 
void rm_space(char *); 
int find(char * , char *); 
char * ptr_to(char *); 
int is_empty(char *); 
char * str_zip(char *, char *); 
void capitalize(char *)
int strcmp_ign_case(char *, char *); 
void take_last(char *, int); 
char * dedeup(char *); 
char * pad(char *, int);
int ends_with_ignore_case(char *, char *); 
char * repeat(char *, int, char); 
char * replace(char *, char *, char *); 
char * str_connect(char * *, int, char); 
void rm_empties(char * *); 
char * * str_chop_all(char *, char); 

#endif /* STR_PROCS_H_*/
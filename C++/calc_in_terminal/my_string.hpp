#ifndef my_string_hpp
#define my_string_hpp
int my_strlen(const char* str);
int my_string_to_int(const char* str);
double my_switch(char oper,double a,double b);
int all_argv_to_array(char* &arr,char* argv[],int &count);
int from_array_to_other_arrays(char* &arr,char* &mas1,char* &mas2,int &count,char &oper);
#endif

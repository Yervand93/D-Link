#include <iostream>
#include "my_string.hpp"


int main(int argc,char* argv[])
{
	char* arr = new char[20];
	char* mas1 = new char[20];
	char* mas2 = new char[20];
	int count = 0; 
	char oper;	// this variable for operators(+; -; *; /) 
	double pat = 0; // variable for numbers at left side operator
	double pat_do = 0; // variable for numbers at right side operator
	
	all_argv_to_array(arr,argv,count); // all arguments of terminal append in my array

	from_array_to_other_arrays(arr,mas1,mas2,count,oper); // from my array append two other arrays.Left and right numbers at operator
	
	pat = my_string_to_int(mas1); // from funcion, replace string numbers to int 
	pat_do = my_string_to_int(mas2); // from function, replace string numbers to int
	
	std::cout << pat << oper << pat_do << " = " << my_switch(oper,pat,pat_do) << std::endl; // printing result 

	delete[] arr;
	delete[] mas1;
	delete[] mas2;	

	return 0;
}

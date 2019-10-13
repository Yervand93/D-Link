#include <iostream>
#include "my_string.hpp"

int my_strlen(const char* str)
{
	int tiv = 0;
	for(int i = 0; str[i];++i)
	{
		tiv++;
	}
	return tiv;
}

int my_string_to_int(const char* str)
{
	int tiv = 0;
	int *arr = new int[my_strlen(str)];
	for(int i = 0; str[i]; ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			arr[i] = str[i] - '0';
			tiv*=10;
			tiv+=arr[i];
		}
	}
	delete[] arr;
	arr = nullptr;
	delete[] arr;
	return tiv;
}

int my_switch(char oper,int a,int b)
{
	int res;
	float k;
	switch(oper)
	{
	case '+':
		res = a+b;
		break;
	case '-':
		res = a-b;
		break;
	case '*':
		res = a*b;
		break;
	case '/':
		try
		{
			if(b == 0)
			{
				throw b;
				break;
			}
			else
			{
				k= (float)(a) / (float)(b);
				std::cout << k << std::endl;
				exit(1);
			}
		}
		catch(float b)
		{
			std::cout << "Can't divide by: ";
			break;
		}
	}
	return res;
}

int all_argv_to_array(char* &arr,char* argv[],int &count)
{
    for(int i = 1; argv[i]; ++i)
    {
        for(int j = 0; argv[i][j]; j++)
        {
            if((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '+' || argv[i][j] == '-' || argv[i][j] == '*' || argv[i][j] == '/')
            {   
                arr[count] = argv[i][j];
                count++;
            }
            else
            {   
                std::cout <<  "You write incorrect symbol" << std::endl;
               	exit(1); 
            }
        }
    }
    return 0;
}

int from_array_to_other_arrays(char* &arr,char* &mas1,char* &mas2,int &count,char &oper)
{
	for(int i = 0; i < count; i++ )
    {
        if(arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            oper = arr[i];
			for(int h = 0; h < i; h++)
            {
                mas1[h] = arr[h];
            }
            for(int j = i+1; j < count;j++)
            {
        		if(arr[j] == '+' || arr[j] == '-' || arr[j] == '*' || arr[j] == '/')
				{
					std::cout << "You must have write only one operator" << std::endl;
					exit(1);
				}
                mas2[j-i-1] = arr[j];
            }
        }
    }
	return 0;
}
